; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "xmlTreeNav"
#define MyAppBaseVersion="0.3.5"
#define MyAppFullVersion=MyAppBaseVersion + "pre"
#define MyAppPublisher="Remi Peyronnet"
#define MyAppCopyright="Copyright (c) Remi Peyronnet"
#define MyAppURL="http://www.lprp.fr/soft/xml/xmltreenav/xmltreenav_en.php3"
#define MyAppOutFile="xmltreenav_setup"

[Setup]
AppName={#MyAppName}
AppPublisher={#MyAppPublisher}
AppVersion={#MyAppFullVersion}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppName}
DefaultGroupName={#MyAppName}
AllowNoIcons=true
DisableProgramGroupPage=yes
OutputBaseFilename={#MyAppOutFile}
OutputDir=..\..\distrib\
ShowLanguageDialog=yes
AlwaysShowGroupOnReadyPage=True
PrivilegesRequired=lowest
PrivilegesRequiredOverridesAllowed=dialog

AppVerName={#MyAppName} {#MyAppFullVersion}
UninstallDisplayName={#MyAppName}
UninstallDisplayIcon={app}\xmlTreeNav.exe
VersionInfoCompany={#MyAppPublisher}
; VersionInfoDescription={#MyAppName}
VersionInfoVersion={#MyAppBaseVersion}
VersionInfoProductName={#MyAppName}
AppCopyright={#MyAppCopyright}


[Files]
Source: ..\..\bin\xmlTreeNav.exe; DestDir: {app}; Flags: ignoreversion
Source: ..\..\bin\lang\fr\xmlTreeNav.mo; DestDir: {app}/lang/fr; Flags: ignoreversion
Source: ..\..\bin\lang\it\xmlTreeNav.mo; DestDir: {app}/lang/it; Flags: ignoreversion
Source: ..\..\bin\lang\xmlTreeNav.pot; DestDir: {app}/lang; Flags: ignoreversion
Source: ..\..\bin\config.xml; DestDir: {app}; Flags: ignoreversion
Source: ..\..\bin\xmltreenav.htb; DestDir: {app}; Flags: ignoreversion
Source: ..\..\bin\filter-added-removed-or-equal.xsl; DestDir: {app}; Flags: ignoreversion
Source: ..\..\..\libxmldiff\bin\xmldiff.exe; DestDir: {app}; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
;Name: {userprograms}\xmlTreeNav; Filename: {app}\xmlTreeNav.exe; WorkingDir: {app}
Name: {autoprograms}\{#MyAppName}; Filename: {app}\xmlTreeNav.exe; WorkingDir: {app}

[Run]
Filename: {app}\xmlTreeNav.exe; Description: {cm:LaunchProgram, {#MyAppName}};  Flags: nowait postinstall skipifsilent

[Registry]
Root: HKCU; Subkey: software/xmlTreeNav; ValueType: string; ValueName: version; ValueData: -; Flags: uninsdeletekey

[ThirdParty]
CompileLogMethod=append

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "italian"; MessagesFile: "compiler:Languages\Italian.isl"
