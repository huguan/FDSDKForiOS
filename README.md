# 互冠聚合SDK iOS客户端文档


[![License MIT](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](https://raw.githubusercontent.com/seven/FDSDKForiOS/master/LICENSE)&nbsp;
[![Support](https://img.shields.io/badge/support-iOS%208%2B%20-blue.svg?style=fla)](https://www.apple.com/nl/ios/)&nbsp;


演示项目
==============
查看并运行 `FDSDKDemo/FDSDKDemo.xcodeproj`



使用
==============

1. 下载 FDSDKDemo 文件夹内的所有内容。<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/path.png"><br/>
2. 将 Frameworks 内的FDSDK.framework和SDK添加(拖放)到你的工程目录中。
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/ProductPath.png"><br/>
3. 在对应项目Targets下找到General，在Embedded Binaries链接 frameworks:
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyEmbeddedBinaries.png"><br/>
4. 导入 `<FDSDK/FDSDK.h>`。
5. 初始化SDK。并更改对应的参数
6. 配置对应渠道SDK设置


初始化SDK
==============
##### 各渠道支持真机模拟器情况
渠道列表 | 支持真机 | 支持模拟器 | 未支持原因
------- | ------- | -------- | --------
升游		|   支持  |   支持    |  
乐嗨嗨		|   支持  |   支持    |  
玄藏		|   支持  |   支持    |  
游龙		|   支持  |   支持    |  
94玩		|   支持  |   支持    |  
PP助手		|   支持  |   支持    |  
互冠		|   支持  |   支持    |  
爱思		|   支持  |   支持    |
XY		|   支持  |   支持    |
麟游		|   支持  |   支持    |
银狐		|   支持  |   支持    |
乐玩		|   支持  |   支持    |
果盘		|   支持  |   不支持  |  合并库过大




##### FDSDKParameters参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>appId</td>
			<td>NSString</td>
			<td>聚合SDK游戏标识</td>
		</tr>
		<tr>
			<td>appKey</td>
			<td>NSString</td>
			<td>聚合SDK游戏Key</td>
		</tr>
		<tr>
			<td>logData</td>
			<td>BOOL</td>
			<td>渠道SDK并集参数。是否打印日志</td>
		</tr>
		<tr>
			<td>debug</td>
			<td>BOOL</td>
			<td>渠道SDK并集参数。是否为测试模式</td>
		</tr>
		<tr>
			<td>fdPlatformType</td>
			<td>NS_ENUM</td>
			<td>设置当前编译链接渠道</td>
		</tr>
	</tbody>
</table>

##### SYSDK FDSYSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>name</td>
			<td>NSString</td>
			<td>升游游戏名</td>
		</tr>
		<tr>
			<td>shortName</td>
			<td>NSString</td>
			<td>升游游戏名缩写</td>
		</tr>
		<tr>
			<td>direction</td>
			<td>NSString</td>
			<td>游戏屏幕方向</td>
		</tr>
	</tbody>
</table>

##### LHHSDK FDLHHSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>pid</td>
			<td>NSString</td>
			<td>乐嗨嗨SDK pid</td>
		</tr>
		<tr>
			<td>AppKey</td>
			<td>NSString</td>
			<td>乐嗨嗨SDK AppKey</td>
		</tr>
		<tr>
			<td>AppScheme</td>
			<td>NSString</td>
			<td>乐嗨嗨SDK AppScheme </td>
		</tr>
	</tbody>
</table>

##### XZSDK FDXZSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>AppID</td>
			<td>NSString</td>
			<td>玄藏SDKAppId</td>
		</tr>
		<tr>
			<td>AppKey</td>
			<td>NSString</td>
			<td>玄藏SDKAppKey</td>
		</tr>
		<tr>
			<td>AppScheme</td>
			<td>NSString</td>
			<td>玄藏SDK AppScheme </td>
		</tr>
	</tbody>
</table>

##### YLSDK YLinfo.plist参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td> pid </td>
			<td>NSString</td>
			<td>游龙SDK pid </td>
		</tr>
		<tr>
			<td>appKey</td>
			<td>NSString</td>
			<td>游龙SDK appKey</td>
		</tr>
	</tbody>
</table>

##### DockSDK FDDockSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>AppID</td>
			<td>NSString</td>
			<td>DockSDK(94玩)AppId</td>
		</tr>
		<tr>
			<td>AppKey</td>
			<td>NSString</td>
			<td>DockSDK(94玩)AppKey</td>
		</tr>
	</tbody>
</table>

##### PPSDK FDPPSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>AppID</td>
			<td>NSString</td>
			<td>PP助手AppId</td>
		</tr>
		<tr>
			<td>AppKey</td>
			<td>NSString</td>
			<td>PP助手AppKey</td>
		</tr>
	</tbody>
</table>

##### QDSDK FDQdSDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>AppID</td>
			<td>NSString</td>
			<td>乐玩SDK游戏标识</td>
		</tr>
		<tr>
			<td>LoginKey</td>
			<td>NSString</td>
			<td>乐玩SDK登陆key</td>
		</tr>
		<tr>
			<td>ChanelID</td>
			<td>NSString</td>
			<td>乐玩channelID </td>
		</tr>
		<tr>
			<td>GameName</td>
			<td>NSString</td>
			<td>游戏名称</td>
		</tr>
		<tr>
			<td>GameID</td>
			<td>NSString</td>
			<td>乐玩游戏id</td>
		</tr>
	</tbody>
</table>


##### YHSDK YHInfo.plist参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>appId</td>
			<td>NSString</td>
			<td>银狐SDK游戏标识</td>
		</tr>
		<tr>
			<td>appKey</td>
			<td>NSString</td>
			<td>银狐SDK游戏密钥</td>
		</tr>
		<tr>
			<td>channelID</td>
			<td>NSString</td>
			<td>银狐channelID </td>
		</tr>
		<tr>
			<td>RYappKey</td>
			<td>NSString</td>
			<td>银狐SDK热云广告跟踪appkey</td>
		</tr>
	</tbody>
</table>

##### LYSDK FDLySDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>productId</td>
			<td>NSString</td>
			<td>LYSDK游戏标识</td>
		</tr>
		<tr>
			<td>linnyouKey</td>
			<td>NSString</td>
			<td>LYSDK游戏密钥</td>
		</tr>
	</tbody>
</table>



##### XYSDK FDXySDKInitModel参数说明
<table>
	<tdead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>appId</td>
			<td>NSString</td>
			<td>XYSDK游戏标识</td>
		</tr>
		<tr>
			<td>appKey</td>
			<td>NSString</td>
			<td>XYSDK游戏密钥</td>
		</tr>
		<tr>
			<td>appScheme</th>
			<td>NSString</th>
			<td>支付回调标识</th>
		</tr>
	</tbody>
</table>


##### ASSDK FDAsSDKInitModel参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>appId</td>
			<td>int</td>
			<td>爱思SDK游戏标识</td>
		</tr>
		<tr>
			<td>appKey</td>
			<td>NSString</td>
			<td>爱思SDK游戏密钥</td>
		</tr>
	</tbody>
</table>


##### HGSDK FDHGSDKInitModel参数说明
<table>
    <thead>
        <tr>
            <th>参数名</th>
            <th>参数类型</th>
            <th>说明</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>gameId</td>
            <td>NSString</td>
            <td>互冠SDK游戏标识</td>
        </tr>
        <tr>
            <td>secretKey</td>
            <td>NSString</td>
            <td>互冠SDK游戏密钥</td>
        </tr>
        <tr>
            <td>cpId</td>
            <td>NSString</td>
            <td>互冠cpid</td>
        </tr>
        <tr>
            <td>channelId</td>
            <td>NSString</td>
            <td>互冠channelId</td>
        </tr>
        <tr>
            <td>wxAppId</td>
            <td>NSString</td>
            <td>微信AppId(可能为空)</td>
        </tr>
    </tbody>
</table>


```objective-c
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [self.window makeKeyAndVisible];

    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"23"];
    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"ea718a569b4a828e5481acc695rr2abb"];
    [[FDSDKParameters sharedHGSDKParameters] setLogData:NO];
    [[FDSDKParameters sharedHGSDKParameters] setDebug:NO];
    
    //设置升游sdk参数
    FDSYSDKInitModel *sySDKInitModel = [FDSYSDKInitModel new];
    [sySDKInitModel setName:@"烈哈哈天"];
    [sySDKInitModel setShortName:@"letrgt"];
    [sySDKInitModel setDirection:@"1"];
    [[FDSDKParameters sharedHGSDKParameters] setSySDKInitModel:sySDKInitModel];
    
    //设置乐嗨嗨sdk参数
    FDLHHSDKInitModel *lhhSDKInitModel = [FDLHHSDKInitModel new];
    [lhhSDKInitModel setPid:@"23456"];
    [lhhSDKInitModel setAppKey:@"91538b441ccc1d8a3dsfsddfdwdf"];
    [lhhSDKInitModel setAppScheme:@"FDLHH"];
    [[FDSDKParameters sharedHGSDKParameters] setLhhSDKInitModel:lhhSDKInitModel];
    
    //设置玄藏SDK参数
    FDXZSDKInitModel *xzSDKInitModel = [FDXZSDKInitModel new];
    [xzSDKInitModel setAppID:@"1043432"];
    [xzSDKInitModel setAppKey:@"acd0552604dfsegfvs7dc6wefds7"];
    [xzSDKInitModel setAppScheme:@"XZshengshizhuzai"];
    [[FDSDKParameters sharedHGSDKParameters] setXzSDKInitModel:xzSDKInitModel];
    
    //设置游龙SDK参数
    //请在YLinfo.plist中填写相关参数
        
    //设置94玩SDK参数
    FDDockSDKInitModel *dockSDKInitModel = [FDDockSDKInitModel new];
    [dockSDKInitModel setAppID:@"324"];
    [dockSDKInitModel setAppKey:@"fewsdf8e25a8b14ewfdsrg0a1609f2834e"];
    [[FDSDKParameters sharedHGSDKParameters] setDockSDKInitModel:dockSDKInitModel];
    
    //设置pp助手SDK参数
    FDPPSDKInitModel *ppSDKInitModel = [FDPPSDKInitModel new];
    [ppSDKInitModel setAppID:@"3043"];
    [ppSDKInitModel setAppKey:@"07ng4beec493edg718fa9a40142980ee"];
    [[FDSDKParameters sharedHGSDKParameters] setPpSDKInitModel:ppSDKInitModel];
        
    //设置乐玩SDK参数
    FDQdSDKInitModel *qdSDKInitModel = [FDQdSDKInitModel new];
    [qdSDKInitModel setGameID:@"1434"];
    [qdSDKInitModel setChanelID:@"52"];
    [qdSDKInitModel setLoginKey:@"d6rg4r7d"];
    [qdSDKInitModel setAppID:@"345653455"];
    [[FDSDKParameters sharedHGSDKParameters] setQdSDKInitModel:qdSDKInitModel];
    
    //设置银狐SDK参数
    //请在YHInfo.plist中填写相关参数

    //设置麟游SDK参数
    FDLySDKInitModel *lySDKInitModel = [FDLySDKInitModel new];
    [lySDKInitModel setProductId:@"diogern"];
    [lySDKInitModel setLinnyouKey:@"cdsfdsjlkfjds"];
    [[FDSDKParameters sharedHGSDKParameters] setLySDKInitModel:lySDKInitModel];
    
    // 设置爱思SDK参数
    FDAsSDKInitModel *asSDKInitModel = [FDAsSDKInitModel new];
    [asSDKInitModel setAppId:634];
    [asSDKInitModel setAppKey:@"11234bb4332dn6576565654"];
    [[FDSDKParameters sharedHGSDKParameters] setAsSDKInitModel:asSDKInitModel];
    
    // 设置XYSDK参数
    FDXySDKInitModel *xySDKInitModel = [FDXySDKInitModel new];
    [xySDKInitModel setAppScheme:@"com.XX.XXX.pay"];
    [xySDKInitModel setAppId:@"123421"];
    [xySDKInitModel setAppKey:@"Drkdgsdkfgndslkjfnfawejrfglsdjls"];
    [[FDSDKParameters sharedHGSDKParameters] setXySDKInitModel:xySDKInitModel];
    

    // 设置互冠SDK参数
    FDHgSDKInitModel *hgSDKInitModel = [FDHgSDKInitModel new];
    [hgSDKInitModel setGameId:@"56"];
    [hgSDKInitModel setSecretKey:@"4gslkdslknvi42k34ln523l3k2j423k"];
    [hgSDKInitModel setChannelId:@"5"];
    [hgSDKInitModel setCpId:@"2344"];
    [hgSDKInitModel setWxAppId:@"wx439c5855ea4dghd3"];

    [[FDSDKParameters sharedHGSDKParameters] setHgSDKInitModel:hgSDKInitModel];

    //选取需要初始化的sdk（银狐sdk只需要执行该代码）
    [[FDSDKParameters sharedHGSDKParameters] setFdPlatformType:FDQDPlatform];
    
    //初始化SDK
    [[FDSDK sharedInstance] fdInitWithSDKParameters:[FDSDKParameters sharedHGSDKParameters]];
    
    return YES;
}
```


##### 第三方支付回调处理

```objective-c
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
{
    [[FDSDK sharedInstance] fdPayResult:application openURL:url options:nil];
    return YES;
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options{

    [[FDSDK sharedInstance] fdPayResult:app openURL:url options:options];
    return YES;
}


- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    [[FDSDK sharedInstance] fdPayResult:application openURL:url sourceApplication:sourceApplication];
    return YES;
}
```

登陆方法
==============
##### FDUserModel参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>userId</th>
			<td>NSString</th>
			<td>聚合SDK用户标识</th>
		</tr>
		<tr>
			<td>token</th>
			<td>NSString</th>
			<td>聚合SDK用户登陆令牌</th>
		</tr>
		<tr>
			<td>sdkUserId</th>
			<td>NSString</th>
			<td>渠道SDK用户标识（可能为空）</th>
		</tr>
		<tr>
			<td>sdkUserName</th>
			<td>NSString</th>
			<td>渠道SDK用户名（可能为空）</th>
		</tr>
		<tr>
			<td>extension</th>
			<td>NSString</th>
			<td>拓展参数（可能为空）</th>
		</tr>
	</tbody>
</table>


```objective-c
- (void)loginButtonClick
{
    [[FDSDK sharedInstance] fdLogin:self.view complete:^(FDUserModel *userModel) {
        
    }];
}
```

更新商品信息
==============
##### productsId 参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>productsId</th>
			<td>NSArry</th>
			<td>商品信息列表</th>
		</tr>
	</tbody>
</table>

```objective-c
[[FDSDK sharedInstance] fdUpdateProducts:@[@"com.rxgs.600",@"com.rxgs.3000",@"com.rxgs.6800",@"com.rxgs.12800",@"com.rxgs.32800",@"com.rxgs.64800"]];
```
初始化服务器
==============
##### productsId 参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>serverId</th>
			<td>NSString</th>
			<td>区服</th>
		</tr>
	</tbody>
</table>

```objective-c
[[FDSDK sharedInstance] fdInitServer:@"1"];
```


用户中心
==============
```objective-c
- (void)centerButtonClick
{
    [[FDSDK sharedInstance] fdCenter];
}
```


支付方法
==============

#### FDPayParamsModel参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>orderId</td>
			<td>NSString</td>
			<td>订单编号</td>
		</tr>
		<tr>
			<td>price</td>
			<td>int</td>
			<td>订单金额（大于等于1的整数）</td>
		</tr>
		<tr>
			<td>productId</td>
			<td>NSString</td>
			<td>商品标识</td>
		</tr>
		<tr>
			<td>productName</td>
			<td>NSString</td>
			<td>商品名称</td>
		</tr>
		<tr>
			<td>productDesc</td>
			<td>NSString</td>
			<td>商品描述</td>
		</tr>
		<tr>
			<td>roleId</td>
			<td>NSString</td>
			<td>角色标识</td>
		</tr>
		<tr>
			<td>roleName</td>
			<td>NSString</td>
			<td>角色名称</td>
		</tr>
		<tr>
			<td>roleLevel</td>
			<td>NSString</td>
			<td>角色等级</td>
		</tr>
		<tr>
			<td>serverId</td>
			<td>NSString</td>
			<td>区服标识</td>
		</tr>
		<tr>
			<td>serverName</td>
			<td>NSString</td>
			<td>区服名称</td>
		</tr>
		<tr>
			<td>extension</td>
			<td>NSString</td>
			<td>拓展参数(不能包含中文字符)</td>
		</tr>
	</tbody>
</table>

```objective-c
- (void)payButtonClick
{
    FDPayParamsModel *payParamsModel = [FDPayParamsModel new];
    [payParamsModel setPrice:6];
    [payParamsModel setServerId:@"1"];
    [payParamsModel setServerName:@"蜀山传奇"];
    [payParamsModel setRoleId:@"1"];
    [payParamsModel setRoleName:@"GG20思密达"];
    [payParamsModel setRoleLevel:@"20"];
    [payParamsModel setOrderId:[self getOrderStringByTime]];
    [payParamsModel setProductId:@"com.qjtl.6"];
    [payParamsModel setProductName:@"元宝"];
    [payParamsModel setProductDesc:@"花费6人民币购买600元宝"];
    [payParamsModel setExtension:@"拓展参数，不能包含中文字符"];
    [[FDSDK sharedInstance] fdPay:payParamsModel complete:^(FDPayResultCode payResultCode) {
        if (payResultCode == FDPayResultCodeSucceed)
        {
            NSLog(@"支付成功");
        }
    }];
}


```


用户注销
==============
```objective-c
- (void)logoutButtonClick
{
    [[FDSDK sharedInstance] fdLogout];
}
```


用户注销回调方法
==============
```objective-c
[[FDSDK sharedInstance] setFdLogoutBlock:^{
    NSLog(@"注销回调");
}];
```
上报玩家信息方法
==============
#### FDRoleModel参数说明
<table>
	<thead>
		<tr>
			<th>参数名</th>
			<th>参数类型</th>
			<th>说明</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>roleName</td>
			<td>NSString</td>
			<td>角色名称</td>
		</tr>
		<tr>
			<td>roleLever</td>
			<td> int</td>
			<td>角色等级</td>
		</tr>
		<tr>
			<td>serverName</td>
			<td>NSString</td>
			<td>角色所在区服</td>
		</tr>
		<tr>
			<td>roleMoney</td>
			<td> int</td>
			<td>角色剩余游戏币</td>
		</tr>
		<tr>
		<tr>
			<td>roleId</td>
			<td>NSString</td>
			<td>角色Id</td>
		</tr>
		<tr>
			<td>serverId</td>
			<td>NSString</td>
			<td>区服id</td>
		</tr>
		<tr>
			<td>payLevel</td>
			<td>NSString</td>
			<td>充值等级</td>
		</tr>
		<tr>
			<td>extar</td>
			<td>NSString</td>
			<td>扩展信息(可不传)</td>
		</tr>
	</tbody>
</table>

```objective-c
    FDRoleModel *roleModel = [FDRoleModel new];
    [roleModel setRoleName:@"GG20思密达"];
    [roleModel setRoleLever:999];
    [roleModel setRoleMoney:10000];
    [roleModel setServerName:@"蜀山传奇"];
    [roleModel setRoleId:@"1"];
    [roleModel setServerId:@"1"];
    [roleModel setPayLevel:@"v15"];
    [roleModel setExtar:@"扩展信息"];
    [[FDSDK sharedInstance] updateRoleInfo: roleModel];
```


配置渠道SDK
==============
1、选择项目，新建Target。并且删除新建项目的所有模板文件。只保留项目的info.plist文件<br/>
2、选择新建的Target。选择Build Phases。引用公共项目的代码和资源
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/ProductSettings1.png"><br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/ProductSettings2.png"><br/>
3、选择新建的Target。选择Build Settings 搜索Other Linker，在Other Linker Falgs加入-ObjC
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/ProductSettings3.png"><br/>

以上三部为公共配置。每新增一个渠道SDK都是如此。不同之处在后面列出来<br/>

##升游SDK所需要配置</br>
###51wan渠道
1、渠道所需要的sdk如下<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51SDK.png"><br/>

2、链接库如下</br>

1. libz.tbd</br>
2. WanAppStoreSDK.framework<br/>
3. libc++.tbd<br/>
4. libHN688SDK_51Wan.a<br/>
5. libsqlite3.tbd<br/>
6. WebKit.framwork<br/>
7. JavaScriptCore.framework<br/>
8. Foundation.framework<br/>
9. CoreGraphics.framework<br/>
10. UIKit.framework<br/>
11. CoreMotion.framework<br/>
12. Security.framework<br/>
13. CoreTelephony.framework<br/>
14. CFNetwork.framework<br/>
15. SystemConfiguration.framework<br/>
16. SPluginPlatform.framework<br/>
17. SYSDK.framework<br/>
18. HN669SDKCore.framework<br/>
19. FDSDK.framework<br/>
20. SCorePluginPlatform.framework<br/>
21. Score.framework<br/>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51ibList.png"><br/>

3、资源文件如下</br>

 1. WanAppStoreSDKBundle.bundle</br>
 2. SResources.bundle</br>
 
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51CopyBundleResoureces.png"><br/>

4.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
 
 添加应用白名单<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51LSApplicationQueriesSchemes.png"><br/>
  
  添加配置信息<br/>
    <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51HN669SDK.png"><br/>


5.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
6.在工程的Build Settings中找info，设置URL Types，添加自定义URL Scheme。URL Scheme在回调结果使用，用来支持完成支付返回App。（需在这里配置为App的Bundle ID，才能在App支付后完成跳转）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51Types.png"><br/>


> ### 注意 
升游SDK 在应用加载完成的代理方法中，初始化window之前调用下面的2个接口：<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYDidFinishLaunching.png"><br/>

>项目中需要接入demo里面AppDelegate文件内展示的所有方法。 <br/>

>游戏开始时只需要调用一次上报角色等级接口（否则充值失败）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYUpdateRoleInfo.png"><br/>

###XY渠道
1、渠道所需要的sdk如下<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYXYSDK.png"><br/>

2、链接库如下</br>

1. libz.tbd</br>
2. libc++.tbd<br/>
3. libsqlite3.tbd<br/>
4. WebKit.framwork<br/>
5. JavaScriptCore.framework<br/>
6. Foundation.framework<br/>
7. CoreGraphics.framework<br/>
8. UIKit.framework<br/>
9. CoreMotion.framework<br/>
10. Security.framework<br/>
11. CoreTelephony.framework<br/>
12. CFNetwork.framework<br/>
13. SystemConfiguration.framework<br/>
14. HN669SDKCore.framework<br/>
15. AlipaySDK.framework<br/>
16. XYSDK.framework.<br/>
17. SPluginPlatform.framework
18. SYSDK.framework<br/>
19. libHN699SDK_XYSDK.a<br/>
20. SCorePluginPlatform.framework<br/>
21. HeePay.framework<br/>
22. Score.framework<br/>
23. FDSDK.framework<br/>



<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYXYibList.png"><br/>

3、资源文件如下</br>

 1. AlipaySDK.bundle</br>
 2. XYSDKResources.bundle<br/>
 3. heepayImage.bundle<br/>
 4. SResources.bundle</br>
 
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYXYCopyBundleResoureces.png"><br/>

4.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
 
 添加应用白名单<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51LSApplicationQueriesSchemes.png"><br/>
  
  添加配置信息<br/>
    <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYXYHN669SDK.png"><br/>


5.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
6.在工程的Build Settings中找info，设置URL Types，添加自定义URL Scheme。URL Scheme在回调结果使用，用来支持完成支付返回App。（需在这里配置为App的Bundle ID，才能在App支付后完成跳转）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SY51Types.png"><br/>


> ### 注意 
升游SDK 在应用加载完成的代理方法中，初始化window之前调用下面的2个接口：<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYDidFinishLaunching.png"><br/>

>项目中需要接入demo里面AppDelegate文件内展示的所有方法。 <br/>

>游戏开始时只需要调用一次上报角色等级接口（否则充值失败）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/SYUpdateRoleInfo.png"><br/>



##乐嗨嗨SDK所需要配置</br>
1、链接库如下</br>

1. ZQSDK.framework</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HLLLibList.png"><br/>

2、资源文件如下</br>

 1. Image.bundle</br>
 2. AlipaySDK.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HLLCopyBundleResoureces.png"><br/>

3.Embed Binaries 里面添加sdk框架库,如下图:
<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HLLEmbedBinaries.png"><br/>

4.添加URL Scheme<br/>
选择Info ->URL Types 点击添加（与初始化中appScheme参数保持一致）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LHHURLScheme.png"><br/> 
 
5.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
添加第三方应用的白名单设置(如图):
在工程里面点击主 .plist 文件，右键"Open As" -> "Source Code"
在打开的源码中添加：<br/>
```xml
    <key>LSApplicationQueriesSchemes</key>
	<array>
		<string>alipay</string>
		<string>weixin</string>
		<string>ZQHYSYT</string>
	</array>
```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HLLSchemes.png"><br/>

另外,需要加上访问相册的白名单:<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockPrivacy.png"><br/>

6.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>


7.在target->Capabilities中打开Keychain Sharing<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LHHKeychain1.png"><br/>
  会得到XXX.entitlements文件，打开文件设置为$(AppIdentifierPrefix)com.lhh，如下图所示<br/>
  
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LHHKeychain2.png"><br/>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LHHKeychain3.png"><br/>




##玄藏SDK所需要配置</br>
1、链接库如下</br>

1. libz.1.tbd</br>
2. libsdc++.6.0.9.tbd</br>
3. Security.framework</br>
4. libc++.tbd</br>
5. libz.tbd</br>
6. CoreMotion.framework </br>
7. CoreTelephony.framework </br>
8. AudioToolbox.framework </br>
9. StoreKit.framework </br>
10. WebKit.framework </br>
11. FDSDK.framework </br>
12.  YLPlatformSDK.framework </br>
 


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YLLibList.png"><br/>

2、资源文件如下</br>

 1. YLPlatformSDK.bundle</br>
 2. SIPKeyboardBundleForiPhone.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XZCopyBundleResoureces.png"><br/>

3.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>


添加访问相机与相册的白名单:<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgInfoplist.png"><br/>

添加微信白名单 LSApplicationQueriesSchemes<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XZQueriesSchemes.png"><br/>

4.在URL Types中添加对应的URL Schemes（格式：XZ+游戏拼音全称，与初始化sdk的APPScheme保持相同）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XZURLSchemes.png"><br/>


5.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
<br/>



##游龙SDK所需要配置</br>
1、链接库如下</br>

1. libz.1.tbd</br>
2. libsdc++.6.0.9.tbd</br>
3. Security.framework</br>
4. libc++.tbd</br>
5. libz.tbd</br>
6. CoreMotion.framework </br>
7. CoreTelephony.framework </br>
8. AudioToolbox.framework </br>
9. StoreKit.framework </br>
10. WebKit.framework </br>
11. FDSDK.framework </br>
12.  YLPlatformSDK.framework </br>
 


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YLLibList.png"><br/>

2、资源文件如下</br>

 1. YLPlatformSDK.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YLCopyBundleResoureces.png"><br/>

3.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>


添加访问相机与相册的白名单:<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgInfoplist.png"><br/>

4.在URL Types中添加对应的URL Schemes（格式：YL+游戏拼音全称）<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YLURLSchemes.png"><br/>


5.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
<br/>

##94玩SDK所需要配置</br>
1、链接库如下</br>

1. libc.tbd</br>
2. libz.tbd</br>
3. CoreMotion.framework
4. Foundation.framework</br>
5. UIKit.framework</br>
6. SystemConfiguration.framework</br>


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockLibList.png"><br/>

2、资源文件如下</br>

 1. DockSDK.framework</br>
 2. Alipay.bundle</br>
 3. SDKBundle.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockCopyBundleResoureces.png"><br/>

3.Embed Frameworks 里面添加sdk框架库,如下图:
<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockEmbedFrameworks.png"><br/>

4.创建一个copy files<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockCopyFiles.png"><br/> 
 
5.info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
添加微信支付宝的白名单设置(如图):
在工程里面点击主 .plist 文件，右键"Open As" -> "Source Code"
在打开的源码中添加：<br/>
```xml
    <key>LSApplicationQueriesSchemes</key>
	<array>
		<string>jingdong</string>
		<string>alipay</string>
		<string>alipays</string>
		<string>alipayshare</string>
		<string>wechat</string>
		<string>weixin</string>
	</array>
```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockSchemes.png"><br/>

另外,需要加上访问相册的白名单:<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/DockPrivacy.png"><br/>

<br/>
6.Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
<br/>



##PP助手SDK所需要配置</br>
1、链接库如下</br>

1. libc++.tbd</br>
2. libz.tbd</br>
3. CoreGraphics.framework</br>
4. Foundation.framework</br>
5. libMobileGestalt.framework</br>
6. AdSupport.framework</br>
7. Security.framework</br>
8. SystemConfiguration.framework</br>
9. CFNetwork.framework</br>
10. MobileCoreServices.framework</br>
11. CoreText.framework</br>
12. UIKit.framework</br>


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPLibList.png"><br/>

2、资源文件如下</br>
1.PPAppPlatformKit.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPCopyBundleResoureces.png"><br/>

3、info.plist配置
选择项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>

4.设置URL Schemes<br/>
因为PP助手充值系统集成了支付宝快捷支付充值方式，该充值方式需要跳转 App，所以需要增加 以下配置，否则充值过程中跳出游戏之后无法返回.值设置为 teiron+  PP助手appid

 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPForAlipay.png"><br/> 
 
5、Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO：<br/>
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPEnableBitcode.png"><br/>
  
6.由于银联只支持竖屏,如果游戏只支持横屏,需要将工程的 info.plist 文件中 supported interface orientations( 和 supported interface orientations(iPad))设置成支持 4 个方向,而游戏的横屏在代码中控制即可。<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPInterface.png"><br/>

7.添加启动图片<br/>
启动图尺寸及命名规则如下所示，直接按照下面的尺寸和命名作图添加到项目中即可<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPImages.png"><br/>
将对应工程的Launch Screen勾选去掉<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/PPLaunchScreen.png"><br/>
选择对应的target->General->App Icons and Launch Images配置如下<br/>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/ppAIaLI.png"><br/>





> ### 注意 
> 关于充值：购买物品价格小于现有PP币的时候，直接提示购买，成功后会回调码payResultCode=FDPayResultCodeSucceedk；购买物品价格大于现有PP币的时候，这时候会回调码payResultCode=FDPayResultCodeUnknown，然后发起购买，这时候购买成功了，客户端不会再有任何的回调，服务端会收到通知，要向的服务端查询订单情况。<br/>
>打包方式：不要用 xcode 的 archive 出包，要用 itunes 导出 ipa 的方式出包:xcode 连接设备，运行 build，得到 xxx.app -  搜索 xxx.app，把它拖到 itunes -  再从 itunes 拖出来<br/>

  


##乐玩SDK所需要配置</br>
1、链接库如下</br>
1. libz.tbd</br>
2. libsqlite3.tbd</br>
3. Foundation.framework</br>
4. UIKit.framework</br>
5. CoreGraphics.framework</br>
6. Security.framework</br>
7. SystemConfiguration.framework </br>
8. AdSupport.framework</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/QdLibList.png"><br/>

2、资源文件如下</br>
1.qdSdkRes.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/QdCopyBundleResoureces.png"><br/>

3、info.plist配置
选择乐玩项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
 
4、Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO： 
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyEnableBitcode.png"><br/>

##银狐SDK所需要配置</br>
1、链接库如下</br>
1. MobileCoreServices.framework</br>
2. UIKit.framework</br>
3. AudioToolbox.framework</br>
4. AVFoundation.framework</br>
5. OpenAL.framework</br>
6. QuartzCore.framework</br>
7. libz.tbd</br>
8. OpenGLES.framework</br>
9. CoreGraphics.framework</br>
10. Foundation.framework</br>
11. CoreMotion.framework</br>
12. Security.framework</br>
13. libsqlite3</br>
14. SystemConfiguration.framework</br>
15. AdSupport.framework</br>
16. CoreTelephony.framework</br>
17. MediaPlayer.framework</br>
18. GameController.framework</br>


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YhLibList.png"><br/>

2、资源文件如下</br>
1.YinHu.bundle</br>
2.YHInfo.plist</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YhCopyBundleResoureces.png"><br/>

3、info.plist配置
选择银狐项目下的info.plist<br/>

在工程的info.plist添加(如果游戏内已经添加了该字段则不需要额外添加，如果没有则必须添加)
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YhInfoWX.jpeg"><br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
 
 iOS10后，苹果规定工程中需添加用户相关权限:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/YhInforplist.png"><br/>
 
 
 
 
 
4、Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO： 
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyEnableBitcode.png"><br/>
  

 

##麟游SDK所需要配置</br>
1、链接库如下</br>
1. libc++.tbd</br>
2. libz.tbd</br>
3. libsqlite3.tbd</br>
4. CFNetwork.framework</br>
5. CoreMotion.framework</br>
6. CoreText.framework</br>
7. StoreKit.framework</br>
8. AdSupport.framework</br>
9. SystemConfiguration.framework</br>
10. QuartzCore.framework</br>
11. Security.framework</br>
12. CoreTelephony.framework</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyLibList.png"><br/>

2、资源文件如下</br>
1.LYGame.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyCopyBundleResoureces.png"><br/>

3、info.plist配置
选择麟游项目下的info.plist<br/>

Xcode7以上需要手动打开网络请求:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyAppTransport.png"><br/>
 
 iOS10后，苹果规定工程中需添加用户相关权限:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyInforplist.png"><br/>
 
 4、Keychain Sharing设置<br/>
 如果使用Xcode8 进行SDK接入，请在Capabilities 中将Keychain Sharing 设置为 ON:<br/>
 <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyKeyChain.png"><br/>
 
 5、Enable Bitcode设置 选择Build Settings 搜索Enable Bitcode，将Enable Bitcode设置为NO： 
  <img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/LyEnableBitcode.png"><br/>
 

##爱思SDK所需要配置</br>
1、链接库如下</br>
1. libc++.tbd</br>
2. libz.tbd</br>
3. libsqlite3.tbd</br>
4. AdSupport.framework</br>
5. AudioToolbox.framework</br>
6. AVFoundation.framework</br>
7. CoreGraphics.framework</br>
8. CoreTelephony.framework</br>
9. Security.framework</br>
10. MobileCoreServices.framework</br>
11. CoreMotion.framework</br>
12. FDSDK.framework</br>
13. AsSdkFMWK.framework</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/AsLibList.png"><br/>

2、资源文件如下</br>
1. AlipaySDK.bundle</br>
2. AsImage.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/AsCopyBundleResoureces.png"><br/>

3、info.plist配置
选择爱思项目下的info.plist右键选择Open As -> Source Code
在最下面添加如下代码
```xml
<key>NSAppTransportSecurity</key>
	<dict>
	    <key>NSAllowsArbitraryLoads</key>
	    <true/>
	</dict>
<key>NSCameraUsageDescription</key>
<string>需要使用相册</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>需要读取媒体资料库</string>
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>i4Tool4008227229</string>
    <string>mqqapiwallet</string>
    <string>weixin</string>
    <string>alipay</string>
</array>
<key>CFBundleURLTypes</key>
<array>
    <dict>
        <key>CFBundleTypeRole</key>
        <string>Editor</string>
        <key>CFBundleURLSchemes</key>
        <array>
            <string>As2</string>
        </array>
    </dict>
</array>
```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/AsInfoplist.png"><br/>

> ### 注意 
> CFBundleURLSchemes 为As + 渠道appid 


##XYSDK所需要配置
1. 链接库如下</br>
2. libz.tbd</br>
3. libsqlite3.tbd</br>
4. AdSupport.framework</br>
5. AVFoundation.framework</br>
6. CoreGraphics.framework</br>
7. CoreTelephony.framework</br>
8. Security.framework</br>
9. MobileCoreServices.framework</br>
10. FDSDK.framework</br>
11. XYPlatform.framework</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XyLibList.png"><br/>

2、资源文件如下</br>
1. XYPlatformResources.bundle</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XyCopyBundleResoureces.png"><br/>

3、info.plist配置
选择XY项目下的info.plist右键选择Open As -> Source Code
在最下面添加如下代码
```xml
<key>LSApplicationQueriesSchemes</key>
<array>
    <string>alipay</string>
    <string>aliminipayauth2222</string>
    <string>wechat</string>
    <string>weixin</string>
    <string>xyzsapp</string>
    <string>alipayauth</string>
</array>
<key>LSRequiresIPhoneOS</key>
<true/>
<key>NSAppTransportSecurity</key>
<dict>
    <key>NSAllowsArbitraryLoads</key>
    <true/>
</dict>
<key>CFBundleURLTypes</key>
<array>
    <dict>
        <key>CFBundleTypeRole</key>
        <string>Editor</string>
        <key>CFBundleURLSchemes</key>
        <array>
            <string>com.hg.sdk.alipay</string>
        </array>
    </dict>
</array>
```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/XyInfoplist.png"><br/>
> ### 注意 
> CFBundleURLSchemes 为自定义。最好为游戏bundle id 以alipay结尾 如com.xxx.xxx.alipay

<<<<<<< HEAD

##果盘SDK所需要配置
1. 链接库如下</br>
1. FDSDK.framework 需要也加到Embed Framework 下</br>
3. libsqlite3.tbd</br>
4. AdSupport.framework</br>
5. AVFoundation.framework</br>
6. AlipaySDK.framework</br>
7. CoreTelephony.framework</br>
8. Security.framework</br>
9. GuoPanGroup.framework</br>
10. libz.tbd</br>
11. HeePay.framework</br>
12. IOKit.framework</br>
13. IOMobileFramebuffer.framework</br>
14. IOSurface.framework</br>
15. libcrypto.a</br>
16. libGPGameSDK.a</br>
17. libprotobuf_64.a</br>
18. libssl.a</br>
19. JavaScriptCore.framework</br>
20. CoreLocation.framework</br>
21. AssetsLibrary.framework</br>
22. CoreMotion.framework</br>
23. AVFoundation.framework</br>
24. SystemConfiguration.framework</br>
25. CFNetwork.framework</br>
26. CoreMotion.framework</br>


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/GpLibList.png"><br/>

2、资源文件如下</br>
1. AlipaySDK.bundle</br>
2. GPGameResource.bundle</br>
3. heepayImage.bundle</br>
4. ipaynow.bundle</br>
5. walletResources.bundle</br>


<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/GpCopyBundleResoureces.png"><br/>

3、info.plist配置
选择GP项目下的info.plist右键选择Open As -> Source Code
在最下面添加如下代码
```xml
<key>CFBundleURLTypes</key>
<array>
	<dict>
		<key>CFBundleTypeRole</key>
		<string>Editor</string>
		<key>CFBundleURLSchemes</key>
		<array>
			<string>com.huguan.FDGPSDKDemo</string>
		</array>
	</dict>
</array>
<key>LSApplicationQueriesSchemes</key>
<array>
	<string>xxassistantsdkV2</string>
	<string>XXAppstore</string>
	<string>cydia</string>
	<string>xxassistant</string>
	<string>xxassistantsdk</string>
	<string>alipay</string>
	<string>weixin</string>
	<string>wechat</string>
</array>
<key>NSLocationAlwaysUsageDescription</key>
<string>需要使用地理位置信息</string>
<key>NSLocationWhenInUseUsageDescription</key>
<string>需要使用地理位置信息</string>
<key>NSMicrophoneUsageDescription</key>
<string>需要使用麦克风</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>需要读取媒体资料库</string>
<key>UIBackgroundModes</key>
<array>
	<string>audio</string>
</array>
<key>NSAppTransportSecurity</key>
<dict>
    <key>NSAllowsArbitraryLoads</key>
    <true/>
</dict>

```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/GpInfoplist.png"><br/>
> ### 注意 
> CFBundleURLSchemes 为自定义。最好为游戏bundle id
> 
=======


##互冠SDK所需要配置
1、链接库如下</br>
1 .FDSDK.framework</br>
2. HGSDK.framework</br>
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgLibList.png"><br/>
其中也要加到Embed Framework
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgLibList1.png"><br/>
2、资源文件如下</br>
1. HGSDK.xcassets</br>

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgCopyBundleResoureces.png"><br/>

3、info.plist配置
选择互冠项目下的info.plist右键选择Open As -> Source Code
在最下面添加如下代码
```xml
<key>NSAppTransportSecurity</key>
	<dict>
		<key>NSAllowsArbitraryLoads</key>
		<true/>
	</dict>
	<key>NSCameraUsageDescription</key>
	<string>需要使用相机</string>
	<key>NSPhotoLibraryUsageDescription</key>
	<string>需要使用相册</string>
```
<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgInfoplist.png"><br/>

> ### 注意 
互冠SDK 支付订单时的productId字段需要与apple后台支付参数productId对应上。

控制屏幕方向需要在项目的AppDelegate.m中实现下面方法

```objective-c
- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window
{
    return [[FDSDK sharedInstance] supportedInterface];
}
```


在Build Phases下加入Run Script如下代码

```
APP_PATH="${TARGET_BUILD_DIR}/${WRAPPER_NAME}"

# This script loops through the frameworks embedded in the application and
# removes unused architectures.
find "$APP_PATH" -name '*.framework' -type d | while read -r FRAMEWORK
do
FRAMEWORK_EXECUTABLE_NAME=$(defaults read "$FRAMEWORK/Info.plist" CFBundleExecutable)
FRAMEWORK_EXECUTABLE_PATH="$FRAMEWORK/$FRAMEWORK_EXECUTABLE_NAME"
echo "Executable is $FRAMEWORK_EXECUTABLE_PATH"

EXTRACTED_ARCHS=()

for ARCH in $ARCHS
do
echo "Extracting $ARCH from $FRAMEWORK_EXECUTABLE_NAME"
lipo -extract "$ARCH" "$FRAMEWORK_EXECUTABLE_PATH" -o "$FRAMEWORK_EXECUTABLE_PATH-$ARCH"
EXTRACTED_ARCHS+=("$FRAMEWORK_EXECUTABLE_PATH-$ARCH")
done

echo "Merging extracted architectures: ${ARCHS}"
lipo -o "$FRAMEWORK_EXECUTABLE_PATH-merged" -create "${EXTRACTED_ARCHS[@]}"
rm "${EXTRACTED_ARCHS[@]}"

echo "Replacing original executable with thinned version"
rm "$FRAMEWORK_EXECUTABLE_PATH"
mv "$FRAMEWORK_EXECUTABLE_PATH-merged" "$FRAMEWORK_EXECUTABLE_PATH"

done
```

如果使用微信分享功能，请在URL Types中添加对应的URL Schemes

<img src="https://raw.githubusercontent.com/huguan/FDSDKForiOS/master/Snapshots/HgURLTypes.png"><br/>

并且在AppDelegate.m中实现下面方法：

```objective-c
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options{

    [[FDSDK sharedInstance] fdShareResult:app openURL:url options:options];

    return YES;
}
```





系统要求
==============
该项目最低支持 `iOS 8.0` 和 `Xcode 7.0`。


许可证
==============
HGSDK 使用 MIT 许可证，详情见 LICENSE 文件。
