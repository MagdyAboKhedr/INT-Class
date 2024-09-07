#include <iostream>
#include "include.hpp"

int	main()
{
    
    INT var_1(500);
    INT var_2 (std::move(var_1));

    //var_1.display();
    var_2.display();
    
    // var_1.setnewval(50);

    // var_1.display();
    // var_2.display();
    
    
}
