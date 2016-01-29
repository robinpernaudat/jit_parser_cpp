/*
 * Token.h
 *
 *  Created on: 27 janv. 2016
 *      Author: robin
 */

#ifndef SRC_TOKEN_H_
#define SRC_TOKEN_H_
#include <string>
#include <functional>
#include <boost/graph/edge_list.hpp>
#include <jitparser/mygraph.h>
using namespace std;
namespace jit_parser {

/**
 * This class define a token (lexer element)
 */
class Token {
public:
	/**
	 * @param tokenMatcher c'est un graph ou sous graph qui permet de matcher le token
	 */
	Token(my_graph tokenMatcher, function<void(void)>);
	virtual ~Token();
private:
	/**
	 * Graph ou sous-graph permettant de valider le token
	 */
	my_graph tokenMatcher;
	/**
	 * fonction appelée si le token est matché
	 */
	function<void(void)> onMatch;
};

} /* namespace jit_parser */

#endif /* SRC_TOKEN_H_ */
