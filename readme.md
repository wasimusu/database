## Database
An implementation of database from sratch in C/C++

Features
* Create database and tables
* Command line parser to parse user commands for database
* CRUD (Create, read, update and delete tables)
* Benchmarks on some standard tasks
* Documentation on readthedocs.org built using Sphinx, Doxygen and breathe.

The documentation for database is on [readthedocs](https://cpp-project-setup.readthedocs.io/en/latest/).

#### Build Status
<img src="https://travis-ci.com/wasimusu/database.svg?branch=master" width="100">
<img src="https://readthedocs.org/projects/graphs/badge/?version=latest">


### Platform
* CMake
* C++17
* Clang
* Linux (Xenial/Ubuntu 18.04)
* Maybe support Bazel build as well

### Build
As prequisites, CMAKE and git needs to be already installed.
```
cd database
sh install.sh
```

#### Product design and requirements
- Handle simultaneous reads and writes.
- Store structure of the table and read rows in table.
- Creating table means creating a struct from user's command. Basically store mappings from keyword to data type
- Take over the command line
```
db
db>
```
- Command line parser for the following
    - db_string to deal with all the string manipulation in the database
    - parser to parse all the user commands
    Command Reference: https://dev.mysql.com/doc/mysql-getting-started/en/
    ```
    db> quit;
    db> show databases;
    ```
    CREATE
    ```
    db> create database pets;
    db> use pets;
    database changed to pets
    db> create table cats
    {
    id      INT unsigned not null auto_increment,
    name    varchar(150) not null,
    owner   varchar(150) not null,
    PRIMARY KEY (id)
    };
    db> show tables;
    ```
    UPDATE
    ```
    db> describe cats;
    db> insert into cats (name, owner) values
    ('Sandy', 'Lennon'),
    ('Cookie', 'Cassey'),
    ('Charlie', 'River');
    ```
    READ
    ```
    db> select * from cats;
    db> select name from cats where owner = 'casey';
    ```
    DELETE
    ```
    db> delete from cats where name = 'Cookie';
    Query OK, 1 row affected
    ```
- Low priority
    - Create user account (create, remove and authenticate users)
    - Password protect the database
