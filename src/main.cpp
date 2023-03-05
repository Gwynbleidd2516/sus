#include "crow.h"

int main()
{
    crow::SimpleApp app;
    
    CROW_ROUTE(app, "/add/<int>/<int>")
    ([](crow::response& res, int a, int b) {
        std::ostringstream os;
        os << a + b;
        res.write(os.str());
        res.end();
    });


    app.port(80).run();
}