//
//  XYDataConfig.h
//  SpeedTransfer
//
//  Created by Hacker on 16/1/16.
//  Copyright © 2016年 Zhuhai Yaowan Intelligent Technology CO., Ltd. All rights reserved.
//

#ifndef XYDataConfig_h
#define XYDataConfig_h

/*******************************************************************
 * -- 數據解析
 *******************************************************************/

#define STDataCheckNull(object) ([object isKindOfClass:[NSDictionary class]] && object != nil && object != NULL)
#define STDataGetValueForKey(object, key) STDataCheckNull(object) ? [object valueForKey:key] : @"Object Can't be nil or isn't NSDictionary class"

#define httpsResult_code(object) ([STDataGetValueForKey(object, @"result_code") intValue] != 0) // 返回bool值
#define httpsDataBody(object) STDataGetValueForKey(object, @"result")
#define httpDataMessage(object) STDataGetValueForKey(object, @"reason")
//https接口数据结构
#define httpsDataMsg @"reason"//服務器調試慘數
#define httpsDataResult_code @"result_code"//錯誤編號，0：正常；其他：服務器異常代碼
#define httpsDataResult @"result"//接口響應數據
#define httpsDataError_code @"error_code"//接口響應數據

/*----------------------------开始----------------------------*/
/*-------------------DataStorage类 数据 保存  KEY--------------*/
/*----------------------------开始----------------------------*/

#define iSLocalLogin  @"iSLocalLogin" //是否本地登陆
#define iSWXLogin @"iSWXLogin" //是否微信登录
#define iSAccountSecurityAuth @"iSAccountSecurityAuth"  // 是否在账号与安全中授权

#define IsAddPictureKey  @"IsAddPicture" //标记是否有新的图片截图
#define IsAddVideoKey  @"IsAddVideo"    //标记是否有新的视频保存
#define IsIsLocation  @"IsLocation"    //标记是否又再次提醒用户开启定位功能
#define MessageUnreadSMNum  @"MessageUnread_sm_count"    //标记未读消息数量-----系统
#define MessageUnreadEQNum  @"MessageUnread_eq_count"    //标记未读消息数量-----移动侦测
#define MessageUnreadRQNum  @"MessageUnread_rq_count"    //标记未读消息数量-----智能检测（人形）
#define MessageUnreadAINum  @"MessageUnread_ai_count"    //标记未读消息数量-----AI检测

//用戶信息
#define userID_http @"userID"    //用户ID
//access_token
#define user_accessToken @"access_token"
//refresh_token
#define user_refreshToken @"refresh_token"

#define loginAcc @"loginAcc"      //登录账号
#define roleName @"roleName"
#define rid @"rid"

#define LoginAccountArray @"LoginAccountArray"

#define userUserIconUrl_http @"userIconUrl"      //用户头像
#define userPhone_http @"phone"      //用户手机号
#define userName_http @"username"      //用户手机号
#define userNickName_http @"NickName"      //用戶昵称
#define userEmail_http @"userEmail"//用户邮箱
#define userPwd_http @"userPWD"//用户密码
#define userCodeLogin_http @"codeLogin"//验证码登录
#define userWXLogin_http @"wxLogin"//微信登录
#define BindAccountTimestamp @"BindAccountTimestamp"//绑定账号提示时间戳
#define DataKey_AgreePrivacy @"DataKey_AgreePrivacy"// 是否同意隐私政策

//OTA升级
#define IsUpgrade_Key @"IsUpgrade_Key"//是否正在升级中
//指纹验证
#define IsFingerprint_Key @"IsFingerprint_Key"//是否开启指纹验证
//指纹验证  只提示一次
#define onlyOnceFingerprint_Key @"onlyOnceFingerprint_Key"//
//指纹验证  是否已经认证
#define IsFingerprinted_Key @"IsFingerprinted_Key"
/// 判断程序终止
#define IsAppKill_Key @"IsAppKill_Key"

//新版本号
#define NewVersionNum_key @"NewVersionNum"
//app下载地址
#define AppDownloadUrl_key @"AppDownloadUrl"
//新版本下载弹窗  只提示一次
#define onlyOnceNewVersion_Key @"onlyOnceNewVersion_Key"//
// 设备低电量不在提示
#define ElectricQuantityTip @"ElectricQuantityTip"//
// 第三方微信登录oauthcode
#define WX_oauthcode @"WX_oauthcode"
//当前语言系统
#define appLanguage @"appLanguage"//
#define AppleLanguages @"AppleLanguages"
//存储消息缓存图片删除的时间
#define deleMsgPicTime @"deleMsgPicTime"

// 保持7天在线当前时间
#define KeepOnlineCurrentTime @"KeepOnlineCurrentTime"
// tutk保存注册推送url
#define tutkPushRegisteredUrl @"tutkPushRegisteredUrl"

#define BackTime @"IsBackTime_Key"

/**
 定位信息保存
 **/
//NSLog(@"国家：%@",placeMark.country);//中国
//NSLog(@"省份：%@",placeMark.administrativeArea);//广东省
//NSLog(@"城市：%@",currentCity);//珠海市
//NSLog(@"区域：%@",placeMark.subLocality);//香洲区
//NSLog(@"街道：%@",placeMark.thoroughfare);//永田路21号
//NSLog(@"具体地址：%@",placeMark.name);//泰坦软件园
#define LocationKey_country @"LocationKey_country"
#define LocationKey_administrativeArea @"LocationKey_administrativeArea"
#define LocationKey_City @"LocationKey_City"
#define LocationKey_subLocality @"LocationKey_subLocality"
#define LocationKey_thoroughfare @"LocationKey_thoroughfare"
#define LocationKey_name @"LocationKey_name"

//纬度
#define LocationKey_latitude @"LocationKey_latitude"
//经度
#define LocationKey_longitude @"LocationKey_longitude"


//是否显示/隐藏功能
#define DataKey_isDisPlayGrade @"isDisPlayGrade"//评分功能
#define DataKey_isDisPlayUsingHelp @"isDisPlayUsingHelp"//使用帮助
#define DataKey_isDisPlayApAddDevice @"isDisPlayApAddDevice"//ap添加设备
#define DataKey_isDisPlayApTool @"isDisPlayApTool"//ap工具
#define DataKey_launchStr @"DataKey_launchStr"//启动图
#define DataKey_QsgStr @"DataKey_QsgStr"//说明书
#define DataKey_ShopStr @"isDataKey_ShopStr"//商城
#define DataKey_isEditionUpgrading @"DataKey_isEditionUpgrading" // 版本升级
#define DataKey_bannerUrl @"DataKey_bannerUrl" // 首页广告图数组
#define DataKey_isShowWifiSignal @"DataKey_isShowWifiSignal" // 是否显示wifi信号强度
#define DataKey_isShowRegion @"DataKey_isShowRegion" // 是否显示国家地区弹窗
#define DataKey_CloudNumber @"DataKey_CloudNumber" // 云存购买上限数量
#define DataKey_isOpenCloud @"DataKey_isOpenCloud"//打开云存---服务器全局控制
#define DataKey_isOpenDebug @"DataKey_isOpenDebug"//打开debug---APP全局控制

#define DataKey_PopupsStartTime @"popupsStartTime"//活动提示弹窗开始时间
#define DataKey_NowTime @"nowTime"//现在时间
#define DataKey_PopupsEndTime @"popupsEndTime"//活动提示弹窗结束时间
#define DataKey_PopupsContent @"popupsContent"//弹窗上下文
///控制本地登录
#define DataKey_disableLocalLogin @"disableLocalLogin"
///控制本地登录添加设备
#define DataKey_disableLocalAddDevice @"disableLocalAddDevice"


//#define isSupportCloud(isCloud) (isCloud == 1?1:0)//云存
// 引导图
#define DataKey_GuideMap_LiveZoom @"DataKey_GuideMap_LiveZoom"//直播缩放
#define DataKey_GuideMap_LiveSwipe @"DataKey_GuideMap_LiveSwipe"//直播滑动
#define DataKey_GuideMap_PlayBackZoom @"DataKey_GuideMap_PlayBackZoom"//回放时间轴缩放

// 特定用户活动弹窗
#define DataKey_PrivatePopupsStartTime @"privatePopupsStartTime"//活动提示弹窗开始时间
#define DataKey_PrivateNowTime @"privateNowTime"//现在时间
#define DataKey_PrivatePopupsEndTime @"privatePopupsEndTime"//活动提示弹窗结束时间
#define DataKey_PrivatePopupsContent @"privatePopupsContent"//弹窗上下文
#define DataKey_PrivatePopupsTitle @"privatePopupsTitle"//弹窗标题
#define DataKey_PrivatePopupsTag @"privatePopupsTag"//弹窗Tag
#define DataKey_PrivatePopupsStatus @"privatePopupsStatus"//弹窗Status

/// 直播统计离线次数
#define DeviceOfflineCountKey @"DeviceOfflineCountKey"
/// 直播统计离线上传时间
#define UploadLogDateTimeKey @"UploadLogDateTimeKey"


//是否播放后台无声音乐
#define isPlayBackMusic @"isPlayBackMusic"//假判断，进来app就会设置YES，不会为NO，为了提高审核
/*----------------------------结束----------------------------*/
/*-------------------DataStorage类 数据 保存  KEY--------------*/
/*----------------------------结束----------------------------*/

// 1、一键登录有设置过密码 0、一键登录没有设置密码 -1、其他登录
#define DataKey_OneLoginPasswordUserDefault @"OneLoginPasswordUserDefault"

//存储关闭弹窗的时间
#define DataKey_Save_SurveysTime @"Save_SurveysTime"


#define DataKey_isAllowInit @"DataKey_isAllowInit"//是否授权全局初始化

#define DataKey_Algorithm @"DataKey_Algorithm"      //算法小店value

/**
 *      Paypal  Client_ID
 **/
#define PAYPAL_CLIENT_ID_Test @"AfnfDqezODOoWGS-W2Itu-Zl1ay1R95IsGlMqPghPA3KGhkPndNMnQT0bdEewvSv92XAFIfLiinmyhBL"
#define PAYPAL_CLIENT_ID_Release @"ASGLg2B3BRy2UND4jkGThqXaS0p9fEH3lpDMNFgLlUcc84gLz5OquwW8Tzq1iY7wWfapm4dVoLNfLgM2"


/**********************************************************/
/************************https  URL*********************/
/**********************************************************/



//本地服务器1:
//http://192.168.136.45:8077
//测试服务器:
//http://13.56.215.252:82
//http://test.dvema.com

//正式服务器:
//http://www.dvema.com:81（旧的，现在使用带s的）
//http://54.215.154.29（俄罗斯客户使用） 
//https://www.dvema.com（适合所有地区，除俄罗斯）

#define URLNUM @"URLNUM" //服务器地址存到本地 0：服务器A（适合所有地区）  1:服务器B（俄罗斯使用）
#define SELETLANGAUGE @"SeletLangauge" //是否存到本地 YES:存到 NO:没有存到
//#define httpHeadItem [DataStorage NSUserDefaultGetBoolValueWithKey:URLNUM]?@"http://54.215.154.29":@"https://www.dvema.com"




  
//海外访问
//#define httpHeadItem @"https://www.dvema.com"

//新测试域名
//#define httpHeadItem @"https://test.zositechc.cn" //  （旧测试域名：https://test.dvema.com）

//国内访问（新）
//#define httpHeadItem  @"https://www.zositechc.cn/" //国内访问 @"https://cn.zositech.xyz"


#define IPCamHttpHead(URL) [domainExtern stringByAppendingString:URL]
// 是否是新版添加设备
#define IsNewAddDevice YES

/**
 *  账号管理/Volumes/Project/LOCAL_SVN_iOS/yeweidong/mergeProject/AnlapusFile/Anlapus.pch:16:9: In file included from /Volumes/Project/LOCAL_SVN_iOS/yeweidong/mergeProject/AnlapusFile/Anlapus.pch:16:
 */

#define httpURL_Authcode  IPCamHttpHead(@"v2/account/authcode")//获取验证码
#define httpURL_Forget  IPCamHttpHead(@"v2/account/forgetCode")//找回密码
#define httpURL_NewVerificationCode  IPCamHttpHead(@"v2/authcode/verify")//【新】找回密码下一步判断验证码是否正确
#define httpURL_refreshTk  IPCamHttpHead(@"account/refreshTk")//刷新token
#define httpURL_perfectUserInfo  IPCamHttpHead(@"account/perfectUserInfo")//完善用户信息//@"http://192.168.1.160:8080/account/perfectUserInfo"//
#define httpURL_showUserMore  IPCamHttpHead(@"account/showUserMore")//查询用户信息
#define httpURL_searchUser  IPCamHttpHead(@"account/searchUser")//搜索用户
#define httpURL_shareUserEquipment  IPCamHttpHead(@"account/shareUserEquipment")//设备共享
#define httpURL_unsharedUserEquipment  IPCamHttpHead(@"account/unsharedUserEquipment")//取消共享
#define httpURL_appInfo  IPCamHttpHead(@"appInfo")//获取app信息
#define httpURL_appVerViews  IPCamHttpHead(@"appVer/views")//获取版本列表
#define httpURL_WXoauthcode IPCamHttpHead(@"wechat/authsign")// 微信登录oauthcode授权
#define httpURL_WXUnbunding IPCamHttpHead(@"oauth/unbunding")// 微信解绑
#define httpURL_WXPerfect IPCamHttpHead(@"wechat/perfect")// 微信绑定
#define httpURL_EmailORPhone IPCamHttpHead(@"oauth/authcode")// 绑定邮箱或手机号
#define httpURL_Binding IPCamHttpHead(@"oauth/perfect")// 下一步-绑定

#define httpURL_GetLoginCode IPCamHttpHead(@"account/loginCode")  // 获取登录验证码
#define httpURL_CodeLogin IPCamHttpHead(@"v3/account/loginByCode")  // 验证码登录
#define httpURL_AppleLogin IPCamHttpHead(@"ios/authsign")  // 苹果登录
#define httpURL_OneClickLogin IPCamHttpHead(@"account/oneClickLogin")  // 一键登录
#define httpURL_CreatePwd IPCamHttpHead(@"account/createPwd")  // 设置密码

#define httpURL_CreateLogin1 IPCamHttpHead(@"account/noPasslogin")  // 登录

/**
*  新版注册登录（密码加密）
*/
#define httpURL_RegisterCode_v3 IPCamHttpHead(@"v3/account/generatepictureCodeView") // 注册获取图片验证码（需要拼接链接codeID, 查询generatepictureCodeView）




// 判断是否测试服务
#define IPDevServer [domainExtern isEqualToString:@"http://test.dvema.com"]?YES:YES
// 加密新接口 v3
#define httpURL_ImageCodeRegister_v3 IPCamHttpHead(@"v3/account/imageCodeRegister/") //注册-图片验证（加密）✔️

#define httpURL_LocalLogin IPCamHttpHead(@"local/login") //本地登录接口


#define httpURL_Register  IPCamHttpHead(@"v3/account/register")// 注册(旧版注册界面)（加密）
#define httpURL_Login  IPCamHttpHead(@"v3/account/login") //登录接口（加密）
#define httpURL_Changepasswd  IPCamHttpHead(@"v3/account/changePwd") //修改密码
#define httpURL_QueryEqM IPCamHttpHead(@"v3/equipment/query") //获取设备信息 新接口（加密）
#define httpURL_AddEquM IPCamHttpHead(@"v3/equipment/add") //新添加设备 (加密)
#define httpURL_AddBaseEquM IPCamHttpHead(@"v3/equipment/batchAdd") //批量添加设备 (加密)

#define httpURL_ResetPwdByCode  IPCamHttpHead(@"v3/account/resetPwdByCode") //重置密码
#define httpURL_QueryAPEqM IPCamHttpHead(@"v3/uiduser/query")//新查询AP设备
#define httpURL_ModifyEquipmentPWD IPCamHttpHead(@"v3/equipment/modify") //新接口，设备修改名字跟密码接口（加密）
#define httpURL_ModifyEquipmentVersion IPCamHttpHead(@"equipment/flowUpdate") //更新版本号接口
#define httpURL_GetUidForSerial IPCamHttpHead(@"serialNumber/attachUID") //根据序列号获取UID
#define httpURL_QueryAccountDelete IPCamHttpHead(@"account/delete")//注销账号

// 2.2.7
#define httpURL_GetCountry IPCamHttpHead(@"region/getCountry") //获取地区数据接口

//获取地区数据接口 22-09-28
#define httpURL_GetCountry1 IPCamHttpHead(@"region/getCountryAndDomainName")


#define httpURL_UploadCountry IPCamHttpHead(@"regionCountry/initUserRegion") //上传地区接口


// 3.0新接口
#define httpURL_ForgetVerifyCode IPCamHttpHead(@"verifyCode/forget") // 验证忘记密码的验证码
// verifyCode/register 验证注册验证码
#define httpURL_RegisterVerifyCode IPCamHttpHead(@"verifyCode/register") // 验证注册验证码
// verifyCode/image 验证注册验证码-图片
#define httpURL_VerifyCodeImageVerifyCode IPCamHttpHead(@"verifyCode/image") //



// v2 密码不加密
//#define httpURL_Register  IPCamHttpHead(@"v2/account/register")//注册
//#define httpURL_Login  IPCamHttpHead(@"account/login")//登陆
//#define httpURL_Changepasswd  IPCamHttpHead(@"account/changePwd")//修改密码
//#define httpURL_QueryEqM IPCamHttpHead(@"v2/equipment/query")//新查询设备
//#define httpURL_AddEquM IPCamHttpHead(@"equipment/add")//新添加设备
//#define httpURL_ResetPwdByCode  IPCamHttpHead(@"v2/account/resetPwdByCode") //重置密码
//#define httpURL_QueryAPEqM IPCamHttpHead(@"uiduser/query")//新查询AP设备
//#define httpURL_ModifyEquipmentPWD IPCamHttpHead(@"equipment/modifyUserEquipment")//修改设备密码


/// 获取添加设备列表
#define httpURL_AddDeviceListData IPCamHttpHead(@"deviceManagement/getDeviceIcon")

/**
 *  设备管理
 */
#define httpURL_AddNewUserEquM IPCamHttpHead(@"equipment/addNewUserEquipment")//添加设备
#define httpURL_QueryUserEqM IPCamHttpHead(@"equipment/queryUserEquipment")//查询设备
#define httpURL_DelUserEqM IPCamHttpHead(@"equipment/delete")//新删除设备 旧：equipment/delUserEquipment
#define httpURL_AddAPEquM IPCamHttpHead(@"v3/uiduser/add")//新添加ap设备
#define httpURL_DelAPEquM IPCamHttpHead(@"uiduser/delete")//删除ap设备
#define httpURL_QueryReset IPCamHttpHead(@"v2/equipment/query_reset")//新查询已复位设备
#define httpURL_Uidpreview IPCamHttpHead(@"uidpreview/add")//获取设备预览图上传路径
#define httpURL_batchDelete IPCamHttpHead(@"equipment/batchDelete")//批量删除设备

#define httpURL_UpdateApInfo IPCamHttpHead(@"uiduser/update")//修改ap设备信息

#define httpURL_NoticeStatus IPCamHttpHead(@"equipment/flow")//获取推送状态
#define httpURL_ChangeStatusNotice IPCamHttpHead(@"detect/changeStatus")//修改报警通知开启
#define httpURL_ChangeStatusNotice_JA IPCamHttpHead(@"detectV2/changeStatus")//修改久安报警通知开启 或ipc版本 >= 2.2.2（开启推送都用这个）

#define httpURL_LogoutNotice IPCamHttpHead(@"account/logout")//登出推送接口设置
#define httpURL_deviceTransfer IPCamHttpHead(@"cloudTransfer/deviceTransfer")//设备转移
#define httpURL_mealTransferTransfer IPCamHttpHead(@"cloudTransfer/mealTransfer")//云存储套餐转移

#define httpURL_CloudUserID IPCamHttpHead(@"v3/equipment/mainUserDevice")//云存主用户
/// 主用户获取子用户分享权限列表
#define httpURL_SharePermissionsList IPCamHttpHead(@"api/device/share/user-permissions")
/// 主用户分享设备编辑权限保存接口
#define httpURL_SharePermissionsSave IPCamHttpHead(@"api/device/share/permissions-save")



/**
 *  OTA升级
 */
#define httpURL_getUpdataFileUrl IPCamHttpHead(@"OTA/getUpdataFileUrl")//获取升级设备的URL
#define httpURL_getEquipmentVersion IPCamHttpHead(@"OTA/getEquipmentVersion")//获取设备版本信息
#define httpURL_getNewVer IPCamHttpHead(@"OTA/getNewVer")//获取升级设备对应语言的URL


/*
 *  云存储
 **/
#define httpURL_Addbyuser IPCamHttpHead(@"device/meal")//云存储操作
#define httpURL_HlsManager IPCamHttpHead(@"HlsManager")//回放云录像
//#define httpURL_getHlsList IPCamHttpHead(@"cloudVod/filterVod")//获取云存储列表
#define httpURL_getHlsList IPCamHttpHead(@"cloudstorage/queryvodlist")//获取云存储列表
#define httpURL_querylist IPCamHttpHead(@"order/querylist")//获取所有设备购买的订单信息
#define httpURL_experienceorder IPCamHttpHead(@"cloudstorage/experienceorder")//云存试用接口-激活码兑换码

//#define httpURL_mealList IPCamHttpHead(@"meal/query")//用户获取所有套餐信息
#define httpURL_mealList IPCamHttpHead(@"cloudstorage/commoditylist")//用户获取所有套餐信息
#define httpURL_createOrder IPCamHttpHead(@"cloudVod/createOrder")//获取支付界面url（paypal）
//#define httpURL_aliPayCreateOrder IPCamHttpHead(@"cloudVod/aliPayCreateOrder")//获取支付界面url（支付宝）
#define httpURL_aliPayCreateOrder IPCamHttpHead(@"cloudstorage/createpayorder")//获取支付界面url（支付宝）
//#define httpURL_CloudStatus IPCamHttpHead(@"cloudVod/status")//用户获取修改当前设备云存开关
#define httpURL_CloudStatus IPCamHttpHead(@"cloudstorage/changevodstatus")//用户获取修改当前设备云存开关
#define httpURL_Details IPCamHttpHead(@"cloudVod/details")//获取单个设备云存配置信息
#define httpURL_CouldDeleteVideo IPCamHttpHead(@"cloudstorage/deletevodlist")//云存删除视频

#define httpURL_CouldDevicecommodity IPCamHttpHead(@"cloudstorage/devicecommodity")//云存提前使用列表
#define httpURL_Couldswitchdevicecommodity IPCamHttpHead(@"cloudstorage/switchdevicecommodity")//云存套餐提前使用替换
#define httpURL_CouldorderStatus IPCamHttpHead(@"cloudVod/orderStatus")    // 获取支付成功状态

// 查询续费订阅套餐
#define httpURL_QueryPayCycle IPCamHttpHead(@"paymentCycle/queryPayCycle")
// 取消续费订阅套餐
#define httpURL_CancelPayCycle IPCamHttpHead(@"paymentCycle/cancelPayCycle")
// 获取有录像日期
#define httpURL_CouldHasvod IPCamHttpHead(@"cloudstorage/hasvod")


/*
 *  邀请家人
 **/
#define httpURL_GenerateTokenUrl IPCamHttpHead(@"deviceShare/generateTokenUrl")//邀请家人，获取token（-、生成二维码）
#define httpURL_showShareInfo IPCamHttpHead(@"deviceShare/showShareInfo") //根据token获取对应设备信息（二、获取到二维码）
#define httpURL_Confirm IPCamHttpHead(@"deviceShare/confirm")//被邀请用户扫码token后添加设备  （三、根据二维码获取信息）
#define httpURL_QueryUser IPCamHttpHead(@"deviceShare/queryUser")//主用户查询当前设备的被分享人（四、获取设备的所有被分享用户）
#define httpURL_DeleteUser IPCamHttpHead(@"deviceShare/deleteUser")//主用户删除当前设备的被分享人（五、移除分享用户）



/*
 *  警告推送
 **/
#define httpURL_Equipment IPCamHttpHead(@"equipment/info")//警告推送——tutk

#define httpURL_QueryInfo IPCamHttpHead(@"detect/queryInfo")//警告推送——自主
#define httpURL_QueryMessageInfo IPCamHttpHead(@"detectV2/queryInfo")//消息列表

/*
 *  信息保存
 **/
#define httpURL_UserbrandinfoAdd IPCamHttpHead(@"userbrandinfo/add")//手机信息，定位

#define httpURL_getUrlPath IPCamHttpHead(@"feedback/getUploadUrl")  //意见反馈获取上传图片路径

#define httpURL_postContentAndImages IPCamHttpHead(@"feedback/add")  //提交意见反馈和内容

#define httpURL_postMessageNumber IPCamHttpHead(@"msg/init")  //获取消息数量

#define httpURL_postSystemList IPCamHttpHead(@"sysmsg/query")  //获取系统通知列表

#define httpURL_POSTDeleteSystemNotice IPCamHttpHead(@"sysmsg/delete")  //删除系统通知

#define httpURL_POSTSystemNoticeUnread IPCamHttpHead(@"user/initInfo")  //初始化推送

#define httpURL_POSTSystemNoticeReaded IPCamHttpHead(@"sysmsg/update")  //系统通知标记已读

#define httpURL_POSTAppLaunchViewFunction IPCamHttpHead(@"appset/query")  //获取程序启动图和功能是否开启

#define httpURL_POSTAppAlexa IPCamHttpHead(@"uidset/update")  //设置Alexa

#define httpURL_POSTAppUidsetUpdateSet IPCamHttpHead(@"uidset/updateSet")  // 设置保存服务器

#define httpURL_POSTAppUidsetUpdateChannelSet IPCamHttpHead(@"uidset/updateChannel")  // 设置保存服务器

#define httpURL_GetUploadAppLogInfoUrl IPCamHttpHead(@"appLog/getUploadUrl")  // APP获取上传日志的路径

#define httpURL_UploadAppLogInfo IPCamHttpHead(@"appLog/add")  // 上传日志信息

#define httpURL_UploadSubscribeMail IPCamHttpHead(@"account/subscribe") // 订阅邮件

#define httpURL_uidModeV2 IPCamHttpHead(@"uidModeV2/add") // 记录尚云p2p状态

//#define httpURL_getIotInfo IPCamHttpHead(@"iot/zsGetIotMessage") // 获取IoT数据
#define httpURL_getIotInfo IPCamHttpHead(@"iot/pcGetIotInfo") // 获取IoT数据


/*
 *  app功能显示隐藏API
 **/
#define APP_SCOREURL [domainExtern containsString:@"https"]?@"https://www.dvema.com/web/app_json/ansjer_app_switch.json":@"http://test.dvema.com/web/app_json/ansjer_app_switch.json"



/*
 *  个性化语音设置
 **/
#define httpURL_GetQueryVoiceList IPCamHttpHead(@"voicePrompt/query") // 获取查询语音列表
#define httpURL_setLoadVoicePrompt IPCamHttpHead(@"uidset/setVoicePrompt") // 语音上传（多选）
#define httpURL_GetVoicePromptUploadUrl IPCamHttpHead(@"voicePrompt/getUploadUrl") // 获取语音上传路径
#define httpURL_UploadVoicePrompt IPCamHttpHead(@"voicePrompt/add") // 上传添加语音
#define httpURL_UpdateVoicePromptName IPCamHttpHead(@"voicePrompt/update") // 修改语音名称
#define httpURL_DeleteVoicePrompt IPCamHttpHead(@"voicePrompt/delete") // 删除铃声

/*
*  查询设备影子
**/
#define httpURL_DeviceShadow IPCamHttpHead(@"v3/equipment/getDeviceFeatures") // 设备影子

#define httpGetApiUrl IPCamHttpHead(@"user/confirmRegion") // 根据传的国家或者地区，获取域名

#define httpURL_UploadBackPlayDuration IPCamHttpHead(@"cloudstorage/videoPlaybackTime") // 上传回放时长

#define httpURL_UserCoupon IPCamHttpHead(@"coupon/UserCoupon") // 获取优惠卷列表


/*
 *  AI
 **/
#define httpURL_AIexperienceorder IPCamHttpHead(@"AiService/experienceOrder")//Ai试用接口
#define httpURL_AIgetUsingPackage IPCamHttpHead(@"AiService/getUsingPackage")//Ai获取头部信息

#define httpURL_aiCommoditylist IPCamHttpHead(@"AiService/commoditylist")//用户获取所有AI套餐列表
#define httpURL_aiCreatepayorder IPCamHttpHead(@"AiService/createpayorder")//用户获取所有AI套餐列表
#define httpURL_aiChangeaistatus IPCamHttpHead(@"AiService/changeaistatus")//AI检测开关
#define httpURL_aiQueryInfo IPCamHttpHead(@"AiService/queryInfo")//查询AI识别消息列表
#define httpURL_aiGetAiStatus IPCamHttpHead(@"AiService/getAiStatus")//查询AI识别消息列表
#define httpURL_aiReadInfo IPCamHttpHead(@"AiService/readInfo")//AI已读消息
#define httpURL_aiDeleteInfo IPCamHttpHead(@"AiService/deleteInfo")//AI删除消息
#define httpURL_aiUpdateJpushTime IPCamHttpHead(@"AiService/updateJpushTime")//记录apns收到时间
#define httpURL_aiQueryorderlist IPCamHttpHead(@"AiService/queryorderlist")//AI订单列表

#define httpURL_getSurveyInfo IPCamHttpHead(@"api/surveys/get/info")//浮窗调查问卷
#define httpURL_getCloseSurvey IPCamHttpHead(@"api/surveys/cloud/storage/icon/close")//用户关闭调查问卷弹窗


#define httpURL_GetAllStatusNotice IPCamHttpHead(@"app/setting/notification/query")// 获取全局消息提醒
#define httpURL_SetAllStatusNotice IPCamHttpHead(@"app/setting/notification/update")// 设置全局消息提醒

#define httpURL_GetSpecificObject IPCamHttpHead(@"appset/page_set") // 获取特定用户活动接口

#define httpURL_4GCommoditylist IPCamHttpHead(@"unicom/api/combo-list")//用户获取所有4G套餐列表
#define httpURL_4GGetUsingPackage IPCamHttpHead(@"unicom/api/user-combo-query")//4g正在使用套餐
#define httpURL_4GCreateOrder IPCamHttpHead(@"unicom/api/combo-pay")//创建订单

#define httpURL_GetAlgorithmData IPCamHttpHead(@"algorithm-shop/api/list")//获取算法小店数据

#define httpURL_GetAlgorithmBanner IPCamHttpHead(@"algorithm-shop/api/banner-list")//获取算法banner

#define httpURL_GetAlgorithmDetails IPCamHttpHead(@"algorithm-shop/api/uid-details")//获取算法详情

#define httpURL_SetFeedbackPushInaccurate IPCamHttpHead(@"feedback/pushInaccurate")//反馈AI提交结果

#define httpURL_GetFeedbackSubmitted IPCamHttpHead(@"feedback/submitted")//获取AI提交状态

#define httpURL_getDismissSurvey IPCamHttpHead(@"api/surveys/entrance/cloud/storage/icon")//用户关闭调查问卷弹窗

#define httpURL_getTimeAlbumVideoList IPCamHttpHead(@"algorithm-shop/photo/video-list")// 时光相册视频

#define httpURL_getTimeAlbumMp3List IPCamHttpHead(@"algorithm-shop/photo/bgm-list")// 时光相册视频

#define httpURL_DeleteTimeAlbumVideo IPCamHttpHead(@"algorithm-shop/photo/video-del")// 删除时光相册视频


#define httpURL_SerialRegion IPCamHttpHead(@"serialNumber/saveRegion")// 上传序列号对应地区

#define httpURL_ModifyRedDot IPCamHttpHead(@"appset/ai-preview") // 修改红点状态

#define httpURL_GetSuperPsd IPCamHttpHead(@"appAccout/getAuthorizationCode") //获取验证码

#define httpURL_VerifyCode IPCamHttpHead(@"appAccout/verifyTheVerificationCode") //验证验证码

#pragma mark -------------------------云盘-----------------------------
#define httpURL_GetCloudDiskPackage IPCamHttpHead(@"icloud/meal/getMeal") //获取云盘套餐

#define httpURL_GetCloudDiskCapacity IPCamHttpHead(@"icloud/meal/getCapacity") //获取云盘容量

#define httpURL_GetCloudDiskCreatePayOrder IPCamHttpHead(@"icloud/meal/createPayOrder") //购买云盘

#define httpURL_GetCloudServiceVodUpload IPCamHttpHead(@"icloud/service/vodUpload") //云存转移云盘

#define httpURL_GetCloudServiceSetIcloudList IPCamHttpHead(@"icloud/service/getIcloudList") //云盘播放列表

/// 删除云盘上传记录
#define httpURL_GetCloudServiceDeleteIcloudRecord IPCamHttpHead(@"icloud/service/deleteIcloudRecord") 


#endif /* XYDataConfig_h */

