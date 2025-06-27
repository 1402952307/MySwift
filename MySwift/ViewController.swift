//
//  ViewController.swift
//  MySwift
//
//  Created by zhou on 2023/11/16.
//

import UIKit
import SnapKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        self.view.backgroundColor = .red
        
        let view = UIView()
        view.backgroundColor = .orange
        self.view.addSubview(view)
        view.snp.makeConstraints { make in
            make.width.equalTo(120)
            make.height.equalTo(120)
            make.center.equalTo(self.view)
        }
        
    }


}

