#include <jitparser/edge.h>

namespace jit_parser {

edge::edge(node_p a, node_p b) {
  // TODO Auto-generated constructor stub
}

edge::~edge() {
  // TODO Auto-generated destructor stub
}

edge_p edge::make(node_p a, node_p b) { return std::make_shared<edge>(a, b); }

} /* namespace jit_parser */
