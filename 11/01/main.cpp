//
//  main.cpp
//  Week 11
//
//  Created by Tayseer Edouni on 3/29/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#include <iostream>
#include "Beverage.h"
#include "CondimentDecorator.h"
#include "DarkRoast.h"
#include "Decaf.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Milk.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"	
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{

	const Beverage&  bev = Espresso();
    
    cout << bev.description() << " = $" << bev.cost() << "\n";
    const Beverage&  bev2 = DarkRoast();
    cout << bev2.description() << " = $" << bev2.cost();
    cout<<endl;
    
    Soy s( bev2 );
    cout << s;
    Mocha t( s );
    cout << t;
    Whip u( t );
    cout << u;
    cout << Whip( Mocha( Soy( Espresso() ) ) );
    
    return 0;
}

