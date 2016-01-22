/*
 * node.h
 *
 *  Created on: 22 janv. 2016
 *      Author: robin
 */

#ifndef SRC_NODE_H_
#define SRC_NODE_H_
#include <memory>
namespace jit_parser {
class node;
using node_p = std::shared_ptr<node>;
class node {
public:
	node();
	virtual ~node();
};

} /* namespace jit_parser */

#endif /* SRC_NODE_H_ */
