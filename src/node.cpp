#include <memory>

#include <jitparser/node.h>

namespace jit_parser {

node_id_t node::id_count = 0;
mutex node::id_count_mutex;

node_id_t node::initId() {
	lock_guard<mutex> guard(node::id_count_mutex);
	return ++node::id_count;
}

node::node(string _name, node_type _type) : name(_name), type(_type) {
  this->type = node_type::other;
  this->node_id = node::initId();
}

node::~node() {
}

node_id_t node::getId(){return this->node_id;}

node_p node::make(string name = "", node_type t) {
  return make_shared<node>(name, t);
}

string node::getName() { return name; }

vector<node_p> node::getSuccessors(){
	return this->successors;
}
void node::add_successors(node_p succ) { this->successors.push_back(succ); }

} /* namespace jit_parser */
