#pragma once
#include <QString>
#include <QUrl>
#include <QDir>

namespace Sparrow {
    typedef enum versionType { RELEASE, SNAPSHOT, OLD_ALPHA, OLD_BETA } versionType;

    typedef struct minecraftVersion {
        QString version;
        versionType type;
        QUrl versionJsonUrl;
        minecraftVersion(void) {}
        minecraftVersion(const QString& version, const versionType& type, const QUrl& versionJsonUrl);
    } minecraftVersion;

	class Minecraft
	{
    public:
        minecraftVersion version;
        QDir rootPath;  //TODO ��װΪ�࣬�ṩ������ȡ����·������ȡ���汾��Ϣ
        QDir path;  //TODO ��װΪ�࣬�ṩ������ȡ�汾��Ϣ
        Minecraft(){}
	};
}
