
#ifndef SRC_EDGE_H_
#define SRC_EDGE_H_
#include <memory>
#include <functional>
#include <utility>
#include <jitparser/node.h>
using namespace std;
namespace jit_parser {

class edge;
using edge_p = shared_ptr<edge>;

class edge {
public:
  edge(node_p, node_p);
  virtual ~edge();

  /**
   * make an edge
   */
  edge_p make(node_p, node_p, function<bool(void)>);
  void setCondition(function<bool(void)>);
  pair<node_p, node_p> getLink();

private:
  function<bool(void)> contition;
  pair<node_p, node_p> link;
};

} /* namespace jit_parser */

#endif /* SRC_EDGE_H_ */
