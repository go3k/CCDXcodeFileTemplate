//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//

#include "___FILEBASENAME___.h"

bool ___VARIABLE_productName:identifier___::init()
{
	//config your layer
	if (!CCLayer::init())
    {
        return false;
    }
	
	return true;
}

CCScene* ___VARIABLE_productName:identifier___::scene()
{
    CCScene* scene = CCScene::create();
    ___VARIABLE_productName:identifier___* layer = ___VARIABLE_productName:identifier___::create();
    scene->addChild(layer);
    
    return scene;
}

