
#ifndef SRC_NODE_H_
#define SRC_NODE_H_
#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <thread>
using namespace std;
using node_id_t = unsigned long long;
namespace jit_parser {
class node;
using node_p = shared_ptr<node>;
enum class node_type { initial, final, other };
class node {
public:
  node(string name, node_type t);
  virtual ~node();
  /**
   * make shared ptr object
   * @param string name, the name of the node. default is empty
   * @param node_type t the type of node. Default if "other".
   * @return node_p a shared ptr
   */
  static node_p make(string name, node_type t = node_type::other);
  /**
   * Return the name of the node
   */
  string getName();
  node_id_t getId();

  vector<node_p> getSuccessors();
  void add_successors(node_p succ);

private:
  node_id_t node_id;
  string name;
  node_type type;
  vector<node_p> successors;
  static node_id_t id_count;
  static mutex id_count_mutex;

  static node_id_t initId();
};

} /* namespace jit_parser */

#endif /* SRC_NODE_H_ */
