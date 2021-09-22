#include <QtCore>

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
