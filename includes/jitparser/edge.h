
#ifndef SRC_EDGE_H_
#define SRC_EDGE_H_
#include <memory>

#include <jitparser/node.h>

namespace jit_parser {

class edge;
using edge_p = std::shared_ptr<edge>;

class edge {
public:
  edge(node_p, node_p);
  virtual ~edge();

  /**
   * make an edge
   */
  edge_p make(node_p, node_p);
};

} /* namespace jit_parser */

#endif /* SRC_EDGE_H_ */
