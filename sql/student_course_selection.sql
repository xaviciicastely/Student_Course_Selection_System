#create schema `scss` first
unlock tables;
drop table if exists `student`;
create table student(
	Sno char(13) primary key,
    Spassword varchar(20) not null,
    Sname varchar(20) not null,
    Sschool varchar(40) not null
)ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

LOCK TABLES `student` WRITE;
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020010906031', 'aq', '小安', '信息与通信工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020020916005', 'lyl', '小刘', '电子科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020060401003', 'hy', '阿郝', '自动化工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908004', 'lkl', '库里', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908020', 'qgbya', '谦哥', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908021', 'shy', '小孙', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908022', 'yyj', '阿竣', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908023', 'myf', '飞哥', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020080908028', 'qz', '小覃', '计算机科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020090919030', 'zyc', '邹邹', '电子科学与工程学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020140902025', 'zrx', '小蕊', '生命科学与技术学院');
INSERT INTO `scss`.`student` (`Sno`, `Spassword`, `Sname`, `Sschool`) VALUES ('2020140902027', 'wyx', '小万', '生命科学与技术学院');
UNLOCK TABLES;


drop table if exists `course`;
create table course(
	Cno char(8) primary key,
    Cname varchar(40) not null,
    Ccategory varchar(30) not null,
    Cschool varchar(40) not null, 
	CTname varchar(20) not null,
    CTtitle varchar(20) not null,
    CTschool varchar(40) not null,
    Cperiod int not null,
    Ccredit decimal(2,1) not null,
    CSnumbermax int not null,
    CSnumber int not null,
    Cplace varchar(40) not null,
    Ctime1 char(20) not null,
    Ctime2 char(20) not null,
    Ctime3 char(20) not null
)ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

LOCK TABLES `course` WRITE;
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`,`Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0800835', '计算机组成原理', '专业必修课', '计算机科学与工程学院', '冯一曼', '教授', '计算机科学与工程学院', '56', '3.5', '100', rand()*100 , '博学楼A333', '星期二 3-4', '星期四 3-4 ', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0805130', '计算机网络', '专业必修课', '计算机科学与工程学院', '李博思', '副教授', '计算机科学与工程学院', '48', '3', '65', rand()*65, '博学楼B303', '星期一 3-4', '星期三 1-2 ', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('G0801530', '数据库原理及其应用', '专业必修课', '计算机科学与工程学院', '刘科德', '教授', '计算机科学与工程学院', '48', '3', '85', rand()*85, '笃行楼A122', '星期二 1-2', '星期四 1-2', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('K0802310', 'C++程序设计', '专业选修课', '计算机科学与工程学院', '贾路', '讲师', '计算机科学与工程学院' ,'32', '2', '100', rand()*100, '笃行楼B214', '星期四 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('P0824135', 'Java程序设计', '专业选修课', '计算机科学与工程学院', '高仕林', '副教授', '计算机科学与工程学院', '32', '2', '100', rand()*100, '笃行楼B213', '星期四 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('D1100250', '高等数学', '数学与自然科学基础课', '所有院系', '高思', '教授', '数学科学学院', '96', '5', '150', rand()*150, '博学楼A117', '星期一 5-6', '星期三 5-6', '星期五 3-4');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('D1200340', '大学物理', '数学与自然科学基础课', '所有院系', '艾尹诗', '教授', '物理学院', '80', '4', '120', rand()*120, '笃行楼A207', '星期二 5-6', '星期四 5-6', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('H0804730', 'Unix操作系统', '专业选修课', '计算机科学与工程学院', '李奇', '副教授', '计算机科学与工程学院', '48', '3', '120', rand()*120, '博学楼B101', '星期三 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('B1735720', '考研学业英语', '通用外语', '所有院系', '赵研睿', '副教授', '外国语学院', '32', '2', '40', 40, '博学楼C110', '星期一 1-2', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('M1739020', '学术英语', '通用外语', '所有院系', '李婷', '副教授', '外国语学院', '32', '2', '40', rand()*40, '博学楼C112', '星期一 1-2', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('M1700520', '留学学业英语（雅思方向）', '通用外语', '所有院系', '陈琪雅', '讲师', '外国语学院', '32', '2', '40', rand()*40, '博学楼C113', '星期一 1-2', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('M1700920', '留学学业英语（托福方向）', '通用外语', '所有院系', '朱田傅', '讲师', '外国语学院', '32', '2', '40', rand()*40, '博学楼C111', '星期一 1-2', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('A1600320', '心理学漫谈', '多元化选修课', '所有院系', '罗伊德', '教授', '公共管理学院', '32', '2.0', '40', rand()*40, '博学楼C313', '星期二 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('A9905020', '艺术导论', '多元化选修课', '所有院系', '罗丹', '讲师', '经济管理学院', '32', '2.0', '60', rand()*60,'博学楼C211', '星期二 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('A1111620', '漫画数学建模', '多元化选修课', '所有院系', '欧乐', '副教授', '数学科学学院', '32', '2.0', '30', rand()*30, '博学楼C123', '星期三 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0101345', '信号与系统', '专业必修课', '信息与通信工程学院', '武阳', '讲师', '信息与通信工程学院', '72', '4.5', '80', 80, '笃行楼A122', '星期一 3-4', '星期三 3-4', '星期五 3-4');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0101435', '通信原理', '专业必修课', '信息与通信工程学院', '易语凝', '副教授', '信息与通信工程学院', '56', '3.5', '120', rand()*120, '笃行楼B214', '星期三 5-6', '星期五 5-6', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0201530', '电磁场与波', '专业选修课', '信息与通信工程学院', '蒋敏', '副教授', '电子科学与工程学院', '48', '3', '60', rand()*60, '博学楼B101', '星期一 9-10', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('F1400430', '数字信号处理', '专业必修课', '生命科学与技术学院', '李鹏', '教授', '生命科学与技术学院', '64', '3', '60', rand()*60, '笃行楼B214', '星期二 1-2', '星期四 3-4', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('E0600140', '数字逻辑设计及应用', '专业必修课', '生命科学与技术学院', '邓贵华', '讲师', '生命科学与技术学院', '64', '4', '100', rand()*100, '博学楼A116', '星期三 1-2', '星期五 5-6', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('G1408020', '生物信息学', '专业必修课', '生命科学与技术学院', '林玲', '副教授', '生命科学与技术学院', '32', '2', '80', rand()*80, '笃行楼B213', '星期一 5-6', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('K1405210', '生理信号采集与处理系统', '专业必修课', '生命科学与技术学院', '范谦宏', '讲师', '生命科学与技术学院', '32', '2', '30', rand()*30, '博学楼C112', '星期五 1-2', '', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('I1108860', '数学建模基础', '多元化选修课', '所有院系', '李青', '副教授', '数学科学学院', '90', '6', '160', rand()*160, '博学楼A213', '星期六 1-2', '星期六 3-4', '');
INSERT INTO `scss`.`course` (`Cno`, `Cname`, `Ccategory`, `Cschool`, `CTname`, `CTtitle`, `CTschool`, `Cperiod`, `Ccredit`, `CSnumbermax`, `CSnumber`, `Cplace`, `Ctime1`, `Ctime2`, `Ctime3`) VALUES ('I1108760', '数学建模方法', '多元化选修课', '所有院系', '王思懿', '副教授', '数学科学学院', '90', '6', '160', rand()*160, '博学楼A213', '星期六 5-6', '星期六 7-8', '');

UNLOCK TABLES;

drop table if exists `excourse`;
create table excourse select *from student as a join course as b on (a.Sschool = b.Cschool);
insert into excourse select * from student, course where course.Cschool= '所有院系';


drop table if exists `selection`;
create table selection(
	SSno char(13) references student(Sno),
    SCno char(8) references excourse(Cno),
    primary key(SSno,SCno)
)ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
UNLOCK TABLES;

drop table if exists `courselog`;
create table courselog(
	ID int not null auto_increment,
    CLSno char(13) not null,
    CLCno char(8) not null,
    CLCname varchar(40) not null,
    CLoperation char(4) not null,
    CLOPcategory char(4) not null,
    CLOPtime datetime not null,
    primary key(ID)
)ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
UNLOCK TABLES;

drop table if exists `returnsc`;
create table returnsc(
	RSCSno char(13) references student(Sno),
    RSCCno char(8) references excourse(Cno),
    primary key(RSCSno,RSCCno)
)ENGINE=InnoDB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
UNLOCK TABLES;