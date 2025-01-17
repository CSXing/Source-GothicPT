#include "sinLinkHeader.h"

sMESSAGEBOX	sMessageBox[100] = {
	{"物品栏内没有足够的空间"},
	{"您的背包已经超过负重限制"},   
	{"物品不能使用"},	   
	{"金钱不足"},
	{"物品不能被合成"},
	{"已经超过最大物品交易数量上限"},
	{"交易取消"},
	{"药剂不能被存放"},
	{"物品合成失败了"},
	{"感谢您慷慨的捐赠"},
	{"仓库中物品数量过多"},
	{"物品不能被升级"},
	{"物品已经被改变.请再次检查"},
	{"拥有的金钱超过最大允许数量"}, 
	{"物品升级失败"},
	{"已经被重置"},
	{"物品图片未被准备"},
	{"您只能重置一次"},
	{"只有公会成员可以使用这个物品"},
	{"您必须在一个公会中才能使用这件物品"},
	{"由于等级限制您不能被传送"},
	{"升级等级已经降低了-1"},
	{"升级等级已经降低了-2"},
	{"升级等级已经增加了+1"},
	{"升级等级已经增加了+2"},
	{"减少任务品的攻击速度"},
	{"   升级任务物品    "},
	{"   增加生命值+15"},
	{"   迷题已经被完成    "},
	{"   答案错误了    "},
	{"   没有更多可以出售的物品了  "},
	{"物品已经被出售"},
	{"卖家的个人商店已经关闭"},
	{"   找不到卖家   "},
	{"    物品的数量错误     "},
	{"    男性角色不能使用    "},
	{"    女性角色不能使用    "},
	{" 女性角色不能获得该物品 "},
	{" 男性角色不能获得该物品 "},
	{"    物品价格已经改变  "},
	{"    非公会奖励金钱    "},
	{"  您的等级还不能使用这个力量之石  "},
	{"     力量之石正在使用过程中    "},
	{"     攻击强度模式正在被测试    "},
	{"    力量之石的改造已经完成    "},
	{"    人物属性点增加5点   "},
	{"    技能点增加1点    "},
	{"属性点和技能点分别增加5点和1点"},
	{"属性点和技能点分别增加5点和2点"},
	{"   死亡经验值惩罚减少1%  "},
	{"   生命值增加40点   " },
	{"您正在进行任务" },
	{"人物等级超过80时，您将在每次升级后得到7点人物属性点." },
	{"人物等级超过90时，您将在每次升级后得到10点人物属性点." },
	{"请重新测试的数量." },
	{"由于超时任务失败." },
	{"佣兵数量过多."},
	{"正被使用中的技能物品."},
	{"不能将您传送到祝福城堡，请至问GM询问详请"},	
	{"该物品不能在个人商店进行出售."},
	{"没有足够数量的税收可以被取出."},
	{"您已经回答过了该问题."},
	{"感谢您回答了该问题."}, 
	{"您的等级不能使用该封印物品."},
	{"物品已经被改造."},
	{"在面对复仇女神的战斗中您胜利了."},
	{"在面对复仇女神的战斗中您失败了."},
	{"已经获得的赔偿物品."},
	{"同一属性的物品不能一起使用."},
	{"稍后才能使用"},
	{"组合宝石的过程中不能取消."},
	{"组合宝石的过程中不能手持武器."},
	{"不能使用与当前发型一样的染发剂."},
	{"物品冶炼失败."}, 
	{"物品制造失败."}, 
	{"组合宝石的状态下不能持有矿石/宝石."}, 
	{"古老文字的组合状态下不能持有秘籍."}, 
	{"不是同类矿石/水晶"}, 
	{"制造公式或排列顺序错误"}, 
};

sMESSAGEBOX2 sMessageBox2[20] = {
	{"多少物品","您想购买?"},
	{"多少物品","您想出售?"},
	{"多少物品","您想抛出?"},
	{"多少金钱  ","您想抛出?"},
	{"",""}, 
	{"多少金钱 "," 您想交易?"},
	{"多少金钱  ","您想移动?"},
	{"多少金钱  ","您想拿回?"},
	{"多少星星 ","您想购买?"},
	{"多少金钱  ","您想捐赠?"}, 
	{"您想注册","您的物品金钱么? "}, 
	{"多少物品","您想购买?"},  
	{"多少金钱  ","您想取回?"}, 
	{"  您想 ","购买这件物品吗?"}, 
	{"  您想 ","购买这件物品吗?"}, 
	{"多少金钱 ","您想取出?"},
	{"几个佣兵","您想雇佣?"} 
	
};

sMESSAGEBOX3 sMessageBox3[MESSAGE3_MAX] = {
	{"您想","学习该技能么?"},
	{"您想", "升级么?"}, 
	{"您想", "执行这个任务么?"},
	{"您想","重新分配吗?"},
	{"进入SOD"," 需要花费"},
	{"您想","重新分配吗?"},			
	{"您想", "执行这个任务么?"}, 
	{"您想", "接收这个物品么?"}, 
	{"您想", "激活公会会徽吗?"}, 
	{"您想", "接收这个物品?"}, 
	{"您想", "传送到这里 ?"}, 
	{"","请输入数量"}, 
	{"您想","购买物品么?"}, 
	{"您想", "出售物品么?"}, 
	{"您想", "接受任务么?"}, 
	{" 您想", "支付该捐赠么?"}, 
	{" 个人商店 ", "fffffffffff"}, 
	{"您想", "交易该物品么? "}, 
	{"您想", "购买该物品么?"}, 
	{"您想 ", "取消注册么?"}, 
	{"您想", "交易该物品么? "}, 
	{"您想", "交易该物品么? "}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "进行传送吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "接受任务吗?"}, 
	{"您想", "升级吗?"}, 
	{"您想", "交易该物品吗? "},
	{"您想", "进行传送吗?"},    
	{"您想购买","一个水晶塔吗?"},      
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "接受该任务吗?"}, 
	{"您希望", "使用该物品吗?"},       
	{"您希望 ", "接受该任务吗?"},
	{"您希望 ", "接受该物品吗?"},   
	{"您希望","移动到大练场吗?"},   
	{"您想", "进行传送吗?"},    					
	{"您想", "交易该物品么? "}, 
	{"你想", "进行传送吗?"},    		
	{"你想", "改造物品吗?"}, 	
	{"你想", "进行传送吗?"},    		
};


char *SkillMaster[4] = {
	"     学习技能",
	"        转职",
	"     离开游戏"

};
char *SkillMaster2[4] = {
	"",
	"",
	""

};

char *ReStartMsg[4] = {
	"        回到原地     ",
	"        回到城镇     ",
	"        离开游戏     ",
	"       经验值不足    "

};
char *ReStartMsg2[4] = {
	"   损失1%的钱/经验值 ",
	"",
	"",
	"      不能回到原地   ",
};


char *SkillUseInfoText[10]= { "       技能修炼      ","     学习新技能和提高技能等级    ","      请选择要修炼的技能      ",
						   	  "   由于目前您没有技能点   ","          无法学习技能      " 
	};

char *sinMsgSkillPoint = "         技能点 : %d";
char *sinMsgEliteSkillPoint = "精英技能点 : %d " ;

char *sinStateName[5]={
	"生命值 : %d/%d  ",
	"灵力值 : %d/%d  ",
	"耐  力 : %d/%d  ",
	"经验值 : %d/%d  ",
	"经验值 : %dM/%dM  "};


char *TownName[3] = {
	"回到里查登\r",
	"回到内维斯克\r",
	"回到菲尔拉\r"};

char *sinAbilityName[50] = {
	"攻击: \r","攻击速度: \r","射程: \r","必杀率: \r","躲避: \r","命中率: \r",
	"防御: \r","抵挡率: \r","速度: \r","耐久度: \r","恢复灵力: \r","恢复生命:\r",
	"恢复耐力: \r","魔防御: \r","自然属性: \r","火防御: \r","冰防御: \r","雷防御: \r","毒防御: \r",
	"水防御: \r","风防御: \r","生命再生: \r","灵力再生: \r","耐力再生: \r","生命提高: \r",
	"灵力提高: \r","耐力提高: \r","药水存放数量: \r","等级要求: \r","力量要求: \r","精神要求: \r",
	"才能要求: \r","敏捷要求: \r","体质要求: \r"};


char *sinSpecialName[50] = {
	"攻击速度: \r","必杀率: \r","躲闪: \r","防御: \r",
	"抵挡率: \r","魔法熟练度: \r","速度: \r","魔防御: \r","自然属性: \r",
	"火防御: \r","冰防御: \r","雷防御: \r","毒防御: \r","水防御: \r","风防御: \r",
	"攻击力: \r","命中: \r","射程: \r",
	"魔攻击: \r","自然攻击: \r","火攻击: \r","冰攻击: \r",
	"雷攻击: \r","毒攻击: \r","水攻击: \r","风攻击: \r",
	"生命最大值增加: \r","灵力最大值增加: \r",
	"生命再生: \r","灵力再生: \r","耐力再生: \r",
	"卖出价格: \r","买入价格: \r"};


char *SpecialName3 = "%s 的特有效果\r";
char *MixResultTitle = "物品组合的结果";
char *NowLevelText = "目前等级\r";
char *NextLevelText = "下一个等级\r";

char *NormalAttckName ="基本攻击";
char *RequirLevel = "%s (等级要求:%d)\r";
char *UseItemGroupName = "对应的装备\r";

char *PoisonName = "毒防御:\r";
char *FireName = "火防御:\r";
char *AttackAreaName = "攻击范围:\r";
char *Attack_RateName = "命中:\r";
char *Max_DamageIncre = "攻击最大值增加:\r";
char *DamageAddName = "攻击力加强:\r";
char *Attack_SpeedAdd = "攻击速度增加:\r";
char *IncreBlock = "抵挡率增加:\r";
char *CountinueTime = "维持的时间:\r";
char *UseManaName = "耗费灵力:\r";
char *DamageName = "攻击力:\r";
char *ShootingRangeName = "射程:\r";
char *IncreAsorb = "防御增加:\r";
char *SecName = "秒";
char *PlusDamageName = "攻击增加:\r";
char *HitNumName = "连续攻击次数:\r";
char *DecreLifeName = "生命减少:\r";
char *Attck_RateAdd = "命中增加:\r";
char *Add_CriticalName = "提高必杀率:\r";
char *Push_AreaName = "退后的距离:\r";
char *FireAttackDamageAdd ="提高火系攻击力:\r";
char *IceName = "冰防御:\r";
char *IceAttackDamageAdd = "冰系攻击力:\r";
char *StuneRate = "晕倒的概率:\r";
char *DefenseRateIncre = "躲闪概率增加:\r";
char *WeaponSizeName ="武器的大小:\r";
char *HwakRotationNum = "鹰的盘旋数:\r";
char *WeaponSpeedAddName  = "武器的速度增加:\r";
char *IncreAttack_RateName = "命中增加:\r";
char *ShootingNumName = "发射数量:\r";
char *SeriesShootingCount = "连续发射的箭数:\r";
char *UseStaminaName = "耗费耐力:\r";
char *MasterSkillMoneyName = "学习技能的费用:\r";

char *ItemAgingResult = "物品混合的结果";

char *sinGold ="%d金";
char *sinGiveItem5 = "增订物品\r";
char *sinCopyItem5 = "复制物品\r";
char *sinNum7 = "回";
char *sinSkillPointName = "技能点";
char *sinG_Pike_Time3 = "冻结时间 :\r"; 
char *sinItemLimitTimeOverMsg = "超出保质期限\r";
char *sinDeadSongPyeunEat = "哎呀，这月饼已经坏掉了!";
char *SmeltingResultTitle = "物品冶炼结果";		
char *ManufactureResultTitle = "物品制造结果";	
char *ManufacturingTitle = "随机";	


char *sinMaxDamageAdd = "最大攻击力增加+\r";
char *sinDamagePiercing = "(穿透攻击)\r";
char *sinAddStamina = "耐力追加量:\r";
char *sinAddLife = "体力追加值:\r";

char *sinDamageUndead50 = "对不死系怪物攻击力追加50% :\r";
char *sinNumCount2 = "个数:\r";
char *sinNumCount3 = "个数\r";
char *sinDecreDamage = "攻击力减小值:\r";
char *sinConvert4 = "变换量:\r";
char *sinIncreElement = "元素属性上升值:\r";
char *sinPartyIncreElement = "队员的属性值上升50% 适用\r";
char *sinFireBallDamage2 = "(对命中的怪物有 100% 伤害)\r";
char *sinFireBallDamage3 = "(攻击半径 60  (1/3 伤害))\r";
char *sinAddDamage7 = "追加攻击力:\r";
char *PlusDamageWeapon = "武器";
char *SparkDamage = "每次发动的攻击力:\r";
char *SparkNum7 = "最多发动数:\r";
char *StunRage ="致晕距离:\r";
char *RecvPotion7 = "..*..";


char *PartyArea7 ="战斗时对全部的队员加强防御:\r";
char *Area17 ="半径:\r";
char *AddAttack_Rate9 ="命中力加重:\r";
char *PiercingRange ="贯通距离:\r";
char *IncreDefense = "防御力增加:\r";
char *AddShootingRange = "射击距离增加:\r";
char *LifeAbsorb = "生命力吸收量:\r";
char *FireDamage = "追加火属性攻击力:\r";
char *IceDamage = "追加冰属性攻击力:\r";
char *LightningDamage = "追加雷属性攻击力:\r";
char *AddManaRegen = "追加灵力再生:\r";
char *LightNum = "雷的数量:\r";
char *ReturnDamage = "返回的伤害:\r";
char *Area18 = "有效半径:\r";
char *IncreMana5 = "增加灵力:\r";
char *Area19 = "有效距离:\r";
char *HelpTitle8 = "帮助";
char *QuestTitle8 = "任务";
char *ResearchTitle8 = "调查";
char *TeleportTitle8 = "传送卷轴";

char *IncreWeaponAttack_RateName = "武器命中率增加:\r";
char *AddMaxDamage = "最大伤害程度增加:\r";
char *LinkCoreName = "传送到公会会员附近\r";
char *DesLinkCore = "对方:";
char *Itemul = "这么好的装备";
char *ItemRecvOk = "你想接收吗？";
char *Money5 = "元";
char *Exp5 = "经验值";
char *WingItemName[6] = {"金属之翼","银色之翼","黄金之翼","大地之翼","混乱之翼","迷失之翼"};
char *WarpGateName[10] = {"混乱之翼","里查登","菲尔拉","黄昏树林","竹之林","废墟村庄","内维斯克","封禁之地","幽拉大陆","迷失之地"};
char *sinWarningName5 = "南瓜妖精";
char *ClanCristalName = "公会会员专用\r";
char *NowMyShopSell = "销售中\r";
char *SecretNumName = "输入认证编号";
char *MyShopExpDoc7 = "宣传语";
char *NotAgingItem2 = "无法锻造的装备";
char *ExpPercent2 = "经验值 : %d.%d%s";
char *Mutant7   =   "突变异种";
char *Mechanic7 = "魔兽怪物";
char *Demon7    = "恶魔系";
char *Nomal7    = "一般怪物";
char *Undead7    = "不死怪物";
char *MonsterAddDamage2 = "增加伤害)\r";
char *MonsterAddDamageFire = "增加火防御)\r";
char *HaWarpGateName[] = {"祝福城堡",0};
char *FallGameName = "精灵之林"; 
char *EndlessGameName = "迷失之塔"; 
char *LookHelp	= ">>详细信息..."; 


char *HoldStarNumDoc = "您的星星数量";
char *StarItemBuy7   = "购买星星";
char *ChangeMoney7   = "(一个星星的价格: 100000)"; 




char *LightningDamage2 = "闪电伤害:\r";
char *SheildDefense = "增加防御:\r";

char *DemonDamage4  = "对恶魔系攻击力:\r";
char *PoisonDamage3  = "毒伤害:\r";
char *PikeNum4       = "矛的数量:\r";
char *poisoningTime  = "中毒时间:\r";
char *PlusCriticalName = "增加致命一击率%:\r";
char *SpiritFalconDamage2 = "鹰眼伤害:\r";
char *LifeGegenPlus = "增加生命值:\r";
char *PlusDamage4 = "附加伤害:\r";
char *PiercingPercent = "穿刺百分比:\r";
char *DamageToLife = "生命值伤害:\r";
char *MyMonster7 = "我的宠物:\r";
char *LifeIncre4 = "生命增加:\r";
char *UndeadDamage3 = "不死系伤害:\r";

char *AttackNum3     = "攻击数量:\r"; 
char *AttackRateMinus = "降低攻击频率:\r"; 
char *MaxDamagePlus2 = "最大附加伤害s:\r"; 
char *LightningAddDamage3 = "闪电附加伤害:\r"; 
char *ReLifePercent4    = "重生比率:\r"; 
char *GetExp3    = "获得经验值:\r"; 
char *ResurrectionChar4    = "复活等级"; 
char *ExtinctionPercent2    = "消失百分比:\r"; 
char *ExtinctionAmount2    = "消失数量:\r"; 
char *IncreLifePercent2   = "增加生命值百分比:\r"; 

char *ReduceDamage3 = "减少伤害:\r"; 
char *IncreMagicDamage = "增加魔法伤害:\r"; 
char *AttackDelay3   = "攻击延迟:\r"; 

char *FireDamage2 = "火焰伤害:\r";
char *IceDamage2 = "冰系伤害:\r";
char *AddDefense8 = "增加防御:\r";
char *SkillDamage5 = "机能伤害:\r";

char *FireDamage3 = "火焰伤害:\r";
char *AddSpeed7 = "增加速度:\r";
char *AfterDamage7 = "之后遭到伤害:\r";
char *MonsterSight7 = "怪物视野:\r";



char *LinghtingAddDamage4="增加闪电的攻击速率:\r";
char *MaxBoltNum4="最大电压:\r";
char *AddAbsorb4="增加伤害吸收率:\r";
char *IncreArea4="增加射程:\r";
char *IncreAttack4="更多攻击强度:\r";
char *GolemLife4="生命+力量:\r";


char *SubAbsorb4="减少吸收伤害:\r";
char *AreaDamage4="射程内的攻击频率:\r";
char *MaxAttackNum4="最大击中数:\r";
char *LifeUp4="增加生命值:\r";

char *CriticalAddDamage4="增加的致命一击率:\r";
char *MonstervsSubCritical4="减弱怪物的致命一击率:\r";
char *ChargingAddPercentDamage4="增加变身后的攻击频率:\r";

char *IncreEvasionPercent4="额外的闪避率:\r";
char *AddShadowNum4="增加视觉组合:\r";

char *WolverinLife4="生命值:\r";
char *WolverinRate4="准确率:\r";
char *WolverinDefense4="防御机率:\r";
char *AddEvasion4="增加躲避能力:\r";
char *AddDamage4="增加(物理)攻击频率:\r";
char *FalconAddDamage4="增加猎鹰的攻击频率:\r";


char *IncreAttackAbsorb4="增加的吸收:\r";

char *RectAngleArea4="在精确的范围角度内攻击:\r"; 

char *MonsterSubSpeed4="受到怪物攻击降低速度:\r";


char *AddLifeRegen4="增加生命再生:\r";
char *AddManaRegen4="增加灵力再生:\r";
char *MagicArea4="魔法有效射程:\r";
char *ChainNum4="受影响的怪物数量:\r";
char *ChainRange4="受影响怪物的怒气值:\r";
char *UndeadDamageAbsorb4="不死系攻击吸收:\r";
char *UserBlockPercent4="角色格档率:\r";

char *SecondIncreMana4="增加每秒魔力恢复:\r";
char *FireDamage4="火攻击速率:\r";
char *DecreSpeed4="减速:\r";
char *DecreAttack4="减低攻击速度:\r";
char *AddPercentDamage4="增加攻击频率:\r";



char *ChainDamage3    = "主要伤害)\r";
char *BrandishDamage3 = "挥舞伤害";
char *PhysicalAbsorb3 = "物理吸收";
char *SparkDamage3    = "放电伤害";
char *BrutalSwingCritical3   = "致命一击";
char *Attck_RateAdd5 = "增加攻击频率:\r";
char *Triumph4="胜利";
char *Use4="你";
char *DivineShield4="圣盾的抵挡率";


char *QuestMonsterName[] = {"刀斧手","骷髅战士","魔剑士","重装蝎兽","骷髅游侠","泰坦巨人" ,
                         "遗忘之地的怪物","绿洲的怪物","古代监狱一层的怪物"};



char *VampOption[10] ={"增加生命%: \r","吸血鬼: \r","造成伤害: \r","减少生命: \r","幸运: \r"};


char *Quest3ItemName[]={"恶魔猎手","古代复仇者","薄雾","蜂王","水蟒","镀金剑","鬼魂"};

char *Quset3ItemDoc15 = "任务物品";
char *Quset3ItemDoc16 = " 用完 ";

char *SparkDamage10 = "闪电伤害:\r";

char *RequirLevel3 = "(需要等级:%d)\r";

char *RecvItemTT = "我获得了物品";
char *PuzzleEvent5 = "迷题完成";
char *BabelHorn = "巴别塔之角";
char *ChristMas				="圣诞节的礼物";
char *NineTailFoxItem = "九尾护身符";
char *MyShopItemSell5 = "价格: \r";
char *CristalItem     ="七水晶";
char *StarDust				="圣诞节的礼物";


char *sinDeadCandyEat = "味道真难吃!";

char *PotionCntDoc2 = "药剂";
char *ItemPrice7 = "物品价格";

char *BuyMyShopItem7 = " %s 已经购买了 %d 数量的 %s 共花费了 %d金";
char *BuyMyShopItem8 = "已经从 %s 处购买了 %d 数量的 %s 共花费了 %d金";
char *ItemName87 = "物品";

char *sinEvent87 = "危险收藏家的请求";
char *sinAddDamageItem = "增加攻击力: \r";
char *sinContinueTimeItem = "持续时间: \r";
char *BuyPotionMoney = "金钱:";
char *BuyPotionKind = "数量:";
char *SheltomName2[] = {"圣洁","平静","祥和","火花","奇袭","锐风","黑暗","神圣","光明", "幻想", "恶魔", "神秘"};

char *AddPercentDamage3= "增加攻击力%: \r";

char *sinLuckyBox = "幸运包";
char *SodMessage_Etc[]= {
			"管理公会的收入为",
			"只有公会会长可以得到它.",
			"现在的税收为 %d%s.",
			};
			
char *SodMessage_Clan[] = {
			"总的收入如下 ",
			"战场昨天提供的奖品为.",
			};
			
char *SodMessage_Master[] = {
			"总的收入如下",
			"战场昨天提供的奖品为.",
			"你需要兑换吗？",
			};
			
char *OtherClanMaster[] = {
			"公会仍然得到奖品",
			"输入兑换的金额.",
			};
	
char *SiegeMessage_Taxrates[] = {
	"税率调整为%d%s.",
	"总的税收已经被累加",
	"金.",
	"您想撤回税收吗?.",
	"现在的税收为%d%s.",
};
char *SiegeMessage_MercenrayA[] = {
	"里查登民兵",
	"它由民兵组成",
	"由于廉价，它的战斗力很弱.",
	"佣兵最大的数量为:20 / %d",
};
char *SiegeMessage_MercenrayB[] = {
	"里查登警卫",
	"作为佣兵来说价格和能力都是比较均衡的",
	"它拥有中等程度的战斗力.",
	"佣兵最大的数量为:20 / %d",
};
char *SiegeMessage_MercenrayC[] = {
	"受祝福的皇家警卫",
	"最高等级的佣兵团队",
	"它拥有最强大的战斗力",
	"佣兵最大的数量为:20 / %d",
};
char *SiegeMessage_TowerIce[] = {
	"冰系水晶塔",
	"冰具有降低移动速度的效果以及",
	"它具有降低攻击速度的能力.",
	"冰水晶的设置已经完成",
};
char *SiegeMessage_TowerFire[] = {
	"火系水晶塔",
	"火具有极强的攻击力但是",
	"没有其他特殊能力.",
	"火水晶的设置已经完成",
};
char *SiegeMessage_TowerLighting[] = {
	"雷系水晶塔",
	"雷具有降低移动速度以及",
	"它具有降低攻击速度的能力.",
	"雷水晶的设置已经完成",
};
char *SiegeMessage_MerMoney   = "佣兵费用: ";
char *SiegeMessage_TowerMoney = "防御塔费用: ";

char *sinClanMaster7 = "冠军公会";
char *sinPrize7 = "奖品 : ";

char *sinLevelQuestMonster[]={"刀斧手","松饼怪","蜜蜂精","台风","鲁图怪","大力鬼王","铁拳领主"};
char *sinLevelQusetDoc="已经猎杀完成 %d 个 %s ^^";

char *sinTeleportDoc[] = {"蘑菇洞穴","蜂房洞穴","诅咒之地","遗忘之地"};
char *sinLevelQuest90_2Mon[] = {"神秘十八","霸天蛛","巨锤魔"};
char *sinLevelQusetDoc2="您需要去狩猎 %d 个 %s";
char *sinLevelQusetDoc3="<Quest> Get the item from %s";
char *sinLimitTiem2 = "时间限制: \r";
char *sinMinute2 = "分钟";
char *sinDay4    = "日";
char *sinHour4   = "小时";
char *sinLevelQusetDoc4="您已经成功狩猎了 %d 个 %s";

sinSTRING sinTestMsg7("呼啦, 嚯嚯嚯, 你输了!");

char *sinMonCodeName[]={
	0,
	"刀斧手",
	"骷髅战士",
	"魔剑士",
	"重甲蝎兽",
	"骷髅游骑兵",     
	"泰坦巨人",
	"松饼怪",
	"蜜蜂精",
	"台风",
	"鲁图怪",                
	"大力鬼王",
	"铁拳领主",
	"神秘十八",
	"霸天蛛",
	"巨锤魔",              
	"骷髅爵士",
	"变种蜗牛",
	"荆棘爬行者",
	"木乃伊",
	"黑暗爵士",             
	"火灵王",            
	"无双石怪",
	"无双石魔",
	"铁甲狂魔",
	"魔弓手",       
	"魔枪人马",
	"蜂王",
	"魔战妖王",
	"梦魇",
	"女巫",                
	"重装魔兽兵",
	"三角魔神",
	"幽灵",
	"英酷巴斯",
	"链锤傀儡",           
	"鬼影魔神",
	"异形",
	"魔锤人马",
	"达克",
	"机械刑天",            
	0,
};

char *ChargingTime4="提高转换速度:\r";
char *AddIceDamage4="增加冰霜元素伤害:\r";
char *IceTime4="冻结时间:\r";
char *sinAttackType = "攻击形式:\r";
char *sinAttackType2[2] ={"手动\r","自动\r"};

char *Won="金钱";


char *CastlItemInfo[] ={
	{"短时间内无敌\r"},  
	{"增加5%的\r"},
	{"按百分比增加躲避\r"},
	{"恢复队伍中玩家的\r"},
	{"原地复活.\r"},
	{"水晶塔的攻击\r"},     
	{"对使用对象的攻击\r"},
	0,
};
char *CastlItemInfo2[] ={
	{"攻击力降低 1/2.\r"},
	{"致命一击\r"},
	{"\r"},
	{"耐力，体力，魔力.\r"},
	{"\r"},
	{"抵消50%\r"},
	{"增加20%\r"},
	0,
};


char *CharClassTarget[8]={
	"使用对象(武士)\r",
	"使用对象(机械兵)\r",
	"使用对象(枪兵)\r",
	"使用对象(弓箭手)\r",
	"使用对象(游侠)\r",
	"使用对象(魔枪手)\r",
	"使用对象(魔法师)\r",
	"使用对象(祭司)\r",
};
char *AttributeTower[4]={
	"属性(火)\r",
	"属性(冰)\r",
	"属性(雷)\r",
	"持续时间:%d秒\r",
};

char *SiegeMessage_MerComplete ="佣兵设置已经完成";


char *haQuestMonsterName[]={
	"独角兽",
	"白免妖",
	"魔兽兵",
	"巨魔兽",
	"骷髅",
	"骷髅王",
	"独眼魔人",
	"刀斧手",
	0,
};
char *ha100LVQuestItemName[]={
	"皇室之斧",
	"皇室之爪",
	"皇室之锤",
	"皇室之枪",
	"皇室之弓",
	"皇室之剑",
	"皇室之标",
	"皇室之杖",
	0,
};

char *ha100LVQuestMonterName[]={
	"普龙心脏的怪物",
	"凯拉笔山谷的怪物",
	0,
};
char *ha100LVQuestName = "疯狂的幽灵";


char *PremiumItemDoc[][2]={
	{"重置属性点\r"     ,""},     
	{"重置技能点\r"     ,""},    
	{"重置属性/技能点\r",""},     
	{"使死亡的玩家\r"    ,"自动复活.\r"},        
	{"在瞬间成无敌状态.\r","但攻击力会降低1/2\r"},  
	{"增加15%的\r"    ,"致命一击.\r"},		
	{"增加15%的\r"         ,"躲避机率.\r"},		
};
char *UpKeepItemDoc[] = {
	"剩余时间: %d分",
	"获得物品 %d%s增加",
	"获得经验值 %d%s增加",
	"攻击力%d%s增加",
	"作战体力药剂",
	"作战法力药剂",
	"负重%d增加",	
	"灵力消耗减少 %d%s",		
	0,
};
char *UpKeepItemName[] = {
	"增加装备掉落的药水",
	"增加经验值的药水",
	"生命回复药剂",
	"灵力回复药剂",
	"负重强化药水",		
	"精英灵力药水",		
	"凤凰",			
	0,
};