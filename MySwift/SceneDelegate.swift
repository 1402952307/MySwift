//
//  SceneDelegate.swift
//  Swift_base1
//
//  Created by mac02 on 2022/5/23.
//

import UIKit

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?


    @available(iOS 13.0, *)
    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {

        guard let winScene = (scene as? UIWindowScene) else { return }
        let rootvc = MainTabBarController()
//        let rootNav = BaseNavigationController(rootViewController: rootvc)
        window = UIWindow(windowScene: winScene)
        window?.backgroundColor = .white
        window?.rootViewController = rootvc
        window?.makeKeyAndVisible()
       
    }

}

