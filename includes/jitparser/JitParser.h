#include <map>
#include <vector>
using namespace std;
#ifndef JITPARSER_H_
#define JITPARSER_H_
#include <jitparser/edge.h>
namespace jit_parser {

class JitParser {
public:
  JitParser();
  virtual ~JitParser();

private:
  vector<edge_p> all_edge;
  vector<node_p> all_node;
};

} /* namespace jit_parser */

#endif /* JITPARSER_H_ */
