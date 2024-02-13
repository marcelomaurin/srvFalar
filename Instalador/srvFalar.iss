; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "srvFalar"
#define MyAppVersion "2.31"
#define MyAppPublisher "Maurinsoft"
#define MyAppURL "http://maurinsoft.com.br"
#define MyAppExeName "srvfalar.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
PrivilegesRequired=admin

AppId={{5D822FE0-2121-4293-C0CA-7223F1C4FCA6}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\srvfalar
DisableProgramGroupPage=yes
OutputDir=C:\Users\marcelo.maurin\Desktop\projetos\srvFalar\bin
OutputBaseFilename=srvFalar_1.3
SetupIconFile=C:\Users\marcelo.maurin\Desktop\projetos\srvFalar\src\srvfalar.ico
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"
Name: "brazilianportuguese"; MessagesFile: "compiler:Languages\BrazilianPortuguese.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "C:\Users\marcelo.maurin\Desktop\projetos\srvFalar\src\Debug\srvfalar.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "C:\Users\marcelo.maurin\Desktop\projetos\srvFalar\src\*.c"; DestDir: "{app}\source\gcc\"; Flags: ignoreversion
Source: "C:\Users\marcelo.maurin\Desktop\projetos\srvFalar\externo\setup_espeak-1.48.04.exe"; DestDir: "{app}\tools\"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\tools\setup_espeak-1.48.04.exe"; Description: "{cm:LaunchProgram,{#StringChange("Espeak", '&', '&&')}}"; Flags: nowait postinstall skipifsilent  runascurrentuser 
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent  runascurrentuser 



