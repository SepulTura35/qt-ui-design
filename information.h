
#include <QtCore>
#include <windows.h>

QString GetCpuName(){
    QProcess Command;
    Command.start(QString("wmic cpu get name"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetPCName(){
    QProcess Command;
    Command.start(QString("hostname"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetOS(){
    QProcess Command;
    Command.start(QString("wmic os get name"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetBrandName(){
    QProcess Command;
    Command.start(QString("wmic computersystem get Manufacturer"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetBrandModel(){
    QProcess Command;
    Command.start(QString("wmic csproduct get name"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetRamSize(){
    QProcess Command;
    Command.start(QString("wmic memorychip get FormFactor"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetSerialNumber(){
    QProcess Command;
    Command.start(QString("wmic bios get serialnumber"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetBiosVersion(){
    QProcess Command;
    Command.start(QString("wmic bios get smbiosbiosversion"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}

QString GetType(){
    QProcess Command;
    Command.start(QString("wmic partition get type"));
    Command.waitForFinished();
    QString CommandOutput = Command.readAllStandardOutput();
    QStringList OutputList;
    OutputList = CommandOutput.split("\n");
    QString Return;
    for(int i = 0; i < OutputList.count(); i++){
        if(QString(OutputList[i]).length() > 3){
            Return = OutputList[i];
        }
    }
    return Return;
}
