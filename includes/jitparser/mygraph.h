/*
 * mygraph.h
 *
 *  Created on: 27 janv. 2016
 *      Author: robin
 */

#ifndef SRC_MYGRAPH_H_
#define SRC_MYGRAPH_H_
#include <vector>
#include <memory>
#include <jitparser/node.h>
#include <jitparser/edge.h>
using namespace std;
namespace jit_parser {

class my_graph;
using my_graph_p = shared_ptr<my_graph>;


/**
 * Définition d'un graph tel qu'il est utilisé dans le projet.
 * Ce graph a un et un seul point d'entrée.
 * Ce graph a au moins un point de sortie.
 * Tous les sommets du arc du graph sont enregistrés dans la classe.
 */
class my_graph {
public:
	my_graph(node_p point_d_entree, vector<node_p> point_de_sortie, vector<edge_p> arcs);
	virtual ~my_graph();
	void add_edge(edge_p);

private:
	/**
	 * Point d'entrée du graph
	 */
	node_p point_d_entree;
	/**
	 * Liste de tous les points de sortie
	 */
	vector<node_p> point_de_sortie;
	/**
	 * Liste de tous les arc
	 */
	vector<edge_p> arcs;
};

} /* namespace jit_parser */

#endif /* SRC_MYGRAPH_H_ */
