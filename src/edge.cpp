#include <jitparser/edge.h>

namespace jit_parser {

edge::edge(node_p a, node_p b) {
  this->link = pair<node_p, node_p>(a, b);
  a->add_successors(b);
}

edge::~edge() {
  // TODO Auto-generated destructor stub
}

edge_p edge::make(node_p a, node_p b, function<bool(void)> f) {
  auto e = make_shared<edge>(a, b);
  e->setCondition(f);
  return e;
}

void edge::setCondition(function<bool(void)> f) { this->contition = f; }

pair<node_p, node_p> edge::getLink() {
	return link; }

} /* namespace jit_parser */
