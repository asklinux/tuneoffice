; -- Tune Office Defines --

#define sCompanyName                    "Tune Office"
#define sIntCompanyName                 sCompanyName
#define sProductName                    "Tune Office"
#define sIntProductName                 "TuneOffice"
#define sAppName                        str(sCompanyName)
#define sPackageName                    str(sIntCompanyName + "-" + sIntProductName)
#define sAppPublisher                   "Tune Office"
#define sAppPublisherURL                "https://tuneoffice.local/"
#define sAppSupportURL                  "https://tuneoffice.local/support"
#define sAppCopyright                   str("© " + sAppPublisher + " " + GetDateTimeString("yyyy",,) + ". All rights reserved.")
#define sAppIconName                    "Tune Office"
#define sOldAppIconName                 "TUNEOFFICE Editors"
#define sAppProtocol                    'tune-office'

#define APP_PATH                        str(sIntCompanyName + "\" + sIntProductName)
#define UPD_PATH                        str(sIntProductName + "Updates")
#define APP_REG_PATH                    str("Software\" + APP_PATH)
#define APP_REG_UNINST_KEY              str(sCompanyName + " " + sProductName)
#define APP_USER_MODEL_ID               "TuneOffice.Documents"
#define APP_MUTEX_NAME                  "TUNEOFFICE"
#define APPWND_CLASS_NAME               "TuneOfficeWindowClass"

#define iconsExe                        "TuneOffice.exe"
#define NAME_EXE_OUT                    "tuneoffice.exe"

#define ASSC_APP_NAME                   "Tune Office"
#define ASCC_REG_PREFIX                 "TuneOffice"
#define ASCC_REG_REGISTERED_APP_NAME    "Tune Office Editors"
#define ASSOC_PROG_ID                   "TuneOffice.Editors"
#define ASSOC_APP_FRIENDLY_NAME         "Tune Office Editors"
