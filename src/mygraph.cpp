/*
 * mygraph.cpp
 *
 *  Created on: 27 janv. 2016
 *      Author: robin
 */

#include <jitparser/mygraph.h>

namespace jit_parser {

my_graph::my_graph(node_p point_d_entree_, vector<node_p> point_de_sortie_, vector<edge_p> arcs_):point_d_entree(point_d_entree_),point_de_sortie(point_de_sortie_),arcs(arcs_) {
}

my_graph::~my_graph() {

}
void my_graph::add_edge(edge_p arc){
	arcs.push_back(arc);
}

} /* namespace jit_parser */
