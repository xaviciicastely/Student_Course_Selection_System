create table Course(
	Cno char(8) primary key,
    Cname varchar(40) not null,
    Ccategory varchar(30) not null,
    Cschool varchar(512) not null, 
    Cperiod int not null,
    Ccredit decimal(2,1) not null,
    CSnumbermax int not null,
    CSnumber int,
    Ctime1 char(20) not null,
    Ctime2 char(20),
    Ctime3 char(20),
    Cplace varchar(128) not null,
    CSno varchar(20) references Student(Sno),
    CTname varchar(20) references Teacher(Tname) 
);
