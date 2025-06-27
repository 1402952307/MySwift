//
//  AppDelegate.swift
//  MySwift
//
//  Created by zhou on 2023/11/16.
//

import UIKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {


    var window: UIWindow?
    var nav : UINavigationController?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        let vc = UIViewController() // 替换为你的根视图控制器
        let nav = UINavigationController(rootViewController: vc)
        var window = UIWindow()
        window = UIWindow(frame: UIScreen.main.bounds)
        window.rootViewController = nav
        window.makeKeyAndVisible()

        return true
    }



}

