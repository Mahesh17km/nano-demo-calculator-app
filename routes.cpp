#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int Add = input["first"].i() + input["second"].i();
    return crow::response{"/{/result /: /" + std::to_string(Add) + "/ }"};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int Sub = input["first"].i() - input["second"].i();
    return crow::response{"/{/result /: /" + std::to_string(Sub) + "/ }"};
}