# Opera_2015

Opera_2015 是一个实验品，类似于一个简单的网络模型框架。

<br>架构层(Template)：<br><br>
1. 服务品层分为：LoginServer、DBServer、LobbyServer、AgentServer、GameServer等五组服务器；<br><br>
2. 数据包模型：RankPacket(排行包)、RoomsPacket(场次包)、RoomsPacket(房间包)、UserPacket(用户数据)、TablePacket(桌面信息包)等；<br><br>
3. 控制器由 PacketHandler里来定义：主要包括Protocol(协议)和FromAgentToGame(处理函数类);<br><br>
4. a线.LoginServer+DBServer=为预登录服务器组；<br><br>
b线.AgentServer(N)+LobbyServer+DBServer=为登陆认证和大厅数据加载服务器组；<br><br> 
c线.AgentServer+GameServer=为用户游戏区服务器组；<br><br>
c线是游戏复本的分布式服务器组处理线，依赖于b线做硬件组扩张；<br><br> 
负载的分布情况主要是LobbyServer(统一数据的派发)、AgentServer（高并发连接处理）、GameServer（游戏逻辑处理）、DBServer（数据存储）; <br><br> 

<br>Petri层(Petri模型)：用于构建分布式网络结点模型。<br><br>
1. 库所 (Place)：表示在分布式中所存在的场所和资源；<br><br>
2. 令牌 (Taken)：表示数据的状态；<br><br>
3. 变迁(Transition)：表示数据的传输方向；<br><br>
