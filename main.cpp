//подключаем макросы catch2
#include <catch2/catch_test_macros.hpp>

#include <cstdint>
#include "ListNode.h"




//юнит-тесты
TEST_CASE("Test method Empty()", "[empty]") {
    INFO("Method Empty() is not correct");
    List list;
    REQUIRE(list.Empty() == true);
}

TEST_CASE("Test method Size()", "[size]") {
    INFO("Method Size() is not correct");
    List list;
    list.PushBack(1);
    CHECK(list.Size() == 1);
    list.PushFront(1000);
    CHECK(list.Size() == 2);
    list.PushBack(-50);
    CHECK(list.Size() == 3);
}

TEST_CASE("Test method Clear()", "[clear]") {
    INFO("Method Clear() is not correct");
    List list;
    list.PushBack(1);
    list.PushFront(1000);
    list.PushBack(-50);
    CHECK(list.Size() == 3);
    list.Clear();
    REQUIRE(list.Empty() == true);
}

TEST_CASE("Test method PushBack()", "[pushback]") {
    INFO("Method PushBack() is not correct");
    List list;
    list.PushBack(10);
    list.PushBack(500);
    REQUIRE(list.PopBack() == 500);
}


TEST_CASE("Test method PushFront()", "[pushfront]") {
    INFO("Method PushFront() is not correct");
    List list;
    list.PushFront(-10);
    list.PushBack(500);
    list.PushFront(1000);
    REQUIRE(list.PopFront() == 1000);
}

TEST_CASE("Test method PopBack()", "[popback]") {
    INFO("Method PopBack() is not correct");
    List list;
    CHECK_THROWS(list.PopBack());
    list.PushFront(-10);
    list.PushBack(500);
    list.PushFront(1000);
    CHECK(list.PopBack() == 500);
}

TEST_CASE("Test method PopFront()", "[popfront]") {
    INFO("Method PopFront() is not correct");
    List list;
    CHECK_THROWS(list.PopFront());
    list.PushFront(-10);
    list.PushBack(500);
    list.PushFront(1000);
    CHECK(list.PopFront() == 1000);
}
