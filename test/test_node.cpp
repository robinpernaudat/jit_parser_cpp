
#define BOOST_TEST_MODULE TestNode
#include <boost/test/unit_test.hpp>
#include <jitparser/node.h>
#include <iostream>

BOOST_AUTO_TEST_CASE(TESTS_node)
{
	auto a = jit_parser::node::make("node A");
	auto b = jit_parser::node::make("node B");

    BOOST_CHECK_EQUAL(a->getId(),1);
    BOOST_CHECK_EQUAL(b->getId(),2);
    BOOST_CHECK(a->getName()==string("node A"));
}


