/*
 * re2graph.h
 *
 *  Created on: 28 janv. 2016
 *      Author: robin
 */

#ifndef SRC_RE2GRAPH_H_
#define SRC_RE2GRAPH_H_
#include <string>
#include <jitparser/mygraph.h>
using namespace std;
namespace jit_parser {

/**
 * Cette classe permet de converstir une expression régulière en graph.
 */
class re2graph {
public:
	re2graph(string regex);
	virtual ~re2graph();
	my_graph_p compile();
};

} /* namespace jit_parser */

#endif /* SRC_RE2GRAPH_H_ */
