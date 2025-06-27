//
//  MainTabBarController.swift
//  Swift_base1
//
//  Created by hhhh on 2023/2/7.
//

import Foundation
import UIKit

class MainTabBarController: UITabBarController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //MARK:-1：添加子控制器
        
        //首页
        addChildViewController(HomeController(), title: "首页", imageName: "tabbar_home")
        
        //信息
        addChildViewController(MessageController(), title: "信息", imageName: "tabbar_message_center")
        
    }
    
    //MARK:-1:添加子控制器:private：私有方法，
    
    private func addChildViewController(_ childController: UIViewController,title : String,imageName:String) {
        
        //1:设置子控制器tabBarItem的标题图片
        childController.title = title;
        childController.tabBarItem.image = UIImage(named: imageName)
        childController.tabBarItem.selectedImage = UIImage(named: imageName + "_highlighted")
        
        //2:添加子控制器
        let childNav = UINavigationController(rootViewController: childController)
        addChild(childNav)
        
    }
    
    
    
}
