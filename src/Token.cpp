/*
 * Token.cpp
 *
 *  Created on: 27 janv. 2016
 *      Author: robin
 */

#include <jitparser/Token.h>

namespace jit_parser {

Token::Token(my_graph  t, function<void(void)> f):tokenMatcher(t),onMatch(f) {


}

Token::~Token() {
	// TODO Auto-generated destructor stub
}

} /* namespace jit_parser */
