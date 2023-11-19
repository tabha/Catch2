#include <catch2/catch_test_macros.hpp>
#include <string>
static std::string getSomething(){
    return std::string("learning is always a good way to start a new challenge");
}

static int Factorial(int number){
    return number <= 1 ? 1 : Factorial(number-1) * number;
}

TEST_CASE("Test factorial number","[single-file]"){
    REQUIRE(Factorial(1)==1);
}