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
