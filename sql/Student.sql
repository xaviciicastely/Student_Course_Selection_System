drop table if exists `student`;
create table student(
	Sno char(13) primary key,
    Spassword varchar(20) not null,
    SCno char(8) references Course(Cno)
)ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


drop table if exists `course`;
create table course(
	Cno char(8) primary key,
    Cname varchar(40) not null,
    Ccategory varchar(30) not null,
    Cschool varchar(512) not null, 
	CTname varchar(20) primary key,
    CTtitle varchar(20) not null,
    CTschool varchar(40) not null,
    Cperiod int not null,
    Ccredit decimal(2,1) not null,
    CSnumbermax int not null,
    CSnumber int,
    Ctime1 char(20) not null,
    Ctime2 char(20),
    Ctime3 char(20),
    Cplace varchar(128) not null
)ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;


create table selection(
	SSno char(13) references student(Sno),
    SCno char(8) references course(Cno),
    primary key(SSno,SCno)
)ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
