/**
 * Polish
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define WELCOME_MSG                         CUSTOM_MENDEL_NAME " gotowa"
#define MSG_SD_INSERTED                     "Karta wlozona"
#define MSG_SD_REMOVED                      "Karta wyjeta"
#define MSG_MAIN                            "Menu glowne" 
#define MSG_DISABLE_STEPPERS                "Wylaczyc silniki"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_COOLDOWN                        "Wychlodzic" 
#define MSG_MOVE_AXIS                       "Ruch osi"
#define MSG_MOVE_X                          "Przesunac X"
#define MSG_MOVE_Y                          "Przesunac Y"
#define MSG_MOVE_Z                          "Przesunac Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_SPEED                           "Predkosc"
#define MSG_NOZZLE                          "Dysza"
#define MSG_BED                             "Stolik"
#define MSG_FAN_SPEED                       "Predkosc went."
#define MSG_FLOW                            "Przeplyw"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_WATCH                           "Informacje"
#define MSG_TUNE                            "Nastroic"
#define MSG_PAUSE_PRINT                     "Przerwac druk"
#define MSG_RESUME_PRINT                    "Kontynuowac"
#define MSG_STOP_PRINT                      "Zatrzymac druk"
#define MSG_CARD_MENU                       "Druk z SD"
#define MSG_NO_CARD                         "Brak karty SD"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Wznowienie druku"
#define MSG_PRINT_ABORTED                   "Druk przerwany"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_FILAMENTCHANGE                  "Wymienic filament"
#define MSG_BABYSTEP_Z                      "Dostrojenie osy Z" 
#define MSG_ADJUSTZ                                         "Autodostroic Z?"
#define MSG_PICK_Z							"Vyberte vytisk"
#define MSG_SETTINGS                         "Ustawienia"
#define MSG_PREHEAT                         "Grzanie"
#define MSG_UNLOAD_FILAMENT                 "Wyjac filament"
#define MSG_LOAD_FILAMENT                 "Wprowadz filament"
#define MSG_ERROR                       "BLAD:"
#define MSG_PREHEAT_NOZZLE              "Nagrzej dysze!"
#define MSG_SUPPORT                     "Pomoc" 
#define MSG_CORRECTLY                   "Wymiana ok?"
#define MSG_YES                                 "Tak"
#define MSG_NO                                  "Nie"
#define MSG_NOT_LOADED                  "Brak filamentu"
#define MSG_NOT_COLOR                  "Kolor zanieczysz."
#define MSG_LOADING_FILAMENT            "Wprow. filamentu"
#define MSG_PLEASE_WAIT                 "Prosze czekac"
#define MSG_LOADING_COLOR               "Czyszcz. koloru"
#define MSG_CHANGE_SUCCESS              "Wymiana ok!"
#define MSG_PRESS                               "Nacisnij przycisk"
#define MSG_INSERT_FILAMENT             "Wprowadz filament"
#define MSG_CHANGING_FILAMENT   "Wymiana filamentu"
#define MSG_SILENT_MODE_ON                                      "Mod       [cichy]"
#define MSG_SILENT_MODE_OFF                                     "Mod [w wydajnosc]" 
#define MSG_REBOOT                                                      "Restart drukarki"
#define MSG_TAKE_EFFECT                                         "wprow. zmian"   
#define MSG_HEATING                         "Grzanie..."
#define MSG_HEATING_COMPLETE                "Grzanie OK."
#define MSG_BED_HEATING                     "Grzanie stolika.."
#define MSG_BED_DONE                        "Stolik OK."
#define MSG_LANGUAGE_NAME                                       "Polski"
#define MSG_LANGUAGE_SELECT                                     "Wybor jezyka"
#define MSG_PRUSA3D                                     "prusa3d.cz"
#define MSG_PRUSA3D_FORUM                                       "forum.prusa3d.cz"
#define MSG_PRUSA3D_HOWTO                                       "howto.prusa3d.cz"


// Do not translate those!
 
#define MSG_Enqueing                        "enqueing \""
#define MSG_POWERUP                         "PowerUp"
#define MSG_CONFIGURATION_VER               " Last Updated: "
#define MSG_FREE_MEMORY                     " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES            "  PlannerBufferBytes: "
#define MSG_OK                              "ok"
#define MSG_ERR_CHECKSUM_MISMATCH           "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM                 "No Checksum with line number, Last Line: "
#define MSG_BEGIN_FILE_LIST                 "Begin file list"
#define MSG_END_FILE_LIST                   "End file list"
#define MSG_M104_INVALID_EXTRUDER           "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER           "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER           "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER           "M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER           "M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS              "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER           "M109 Invalid extruder "
#define MSG_M115_REPORT                     "FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED                      "Printer halted. kill() called!"
#define MSG_ERR_STOPPED                     "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND                          "Resend: "
#define MSG_M119_REPORT                     "Reporting endstop status"
#define MSG_ENDSTOP_HIT                     "TRIGGERED"
#define MSG_ENDSTOP_OPEN                    "open"
#define MSG_SD_CANT_OPEN_SUBDIR             "Cannot open subdir"
#define MSG_SD_INIT_FAIL                    "SD init fail"
#define MSG_SD_VOL_INIT_FAIL                "volume.init failed"
#define MSG_SD_OPENROOT_FAIL                "openRoot failed"
#define MSG_SD_CARD_OK                      "SD card ok"
#define MSG_SD_WORKDIR_FAIL                 "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL               "open failed, File: "
#define MSG_SD_FILE_OPENED                  "File opened: "
#define MSG_SD_FILE_SELECTED                "File selected"
#define MSG_SD_WRITE_TO_FILE                "Writing to file: "
#define MSG_SD_PRINTING_BYTE                "SD printing byte "
#define MSG_SD_NOT_PRINTING                 "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE            "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR            "Cannot enter subdir: "
#define MSG_STEPPER_TOO_HIGH                "Steprate too high: "
#define MSG_ENDSTOPS_HIT                    "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP           " cold extrusion prevented"
#define MSG_BABYSTEPPING_X                  "Babystepping X"
#define MSG_BABYSTEPPING_Y                  "Babystepping Y"
#define MSG_BABYSTEPPING_Z                  "Dostavovani Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE     "Error in menu structure"
#define MSG_SET_HOME_OFFSETS                "Nastav pocatek home"
#define MSG_SET_ORIGIN                      "Nastav pocatek"

#define MSG_SWITCH_PS_ON                    "Vypnout zdroj"
#define MSG_SWITCH_PS_OFF                   "Zapnout zdroj"

#define MSG_NOZZLE1                         "Tryska2"
#define MSG_NOZZLE2                         "Tryska3"


#define MSG_FLOW0                           "Prutok 0"
#define MSG_FLOW1                           "Prutok 1"
#define MSG_FLOW2                           "Prutok 2"
#define MSG_CONTROL                         "Kontrola"
#define MSG_MIN                             " \002 Min"
#define MSG_MAX                             " \002 Max"
#define MSG_FACTOR                          " \002 Fact"

 #define MSG_MOTION                          "Pohyb"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED                  "E in mm3"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Ulozit pamet"
#define MSG_RESTORE_FAILSAFE                "Obnovit vychozi"
#define MSG_REFRESH                         "\xF8" "Obnovit"

#define MSG_INIT_SDCARD                     "Inic. SD"
#define MSG_CNG_SDCARD                      "Vymenit SD"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"

 #define MSG_RECTRACT                        "Rectract"

#define MSG_HOMEYZ                          "Kalibruj Z"
#define MSG_HOMEYZ_PROGRESS                 "Kalibruje Z"
#define MSG_HOMEYZ_DONE                     "Kalibracja OK"

#define MSG_SELFTEST_ERROR                  "Selftest error !"
#define MSG_SELFTEST_PLEASECHECK            "Skontroluj :"   
#define MSG_SELFTEST_NOTCONNECTED           "Nie podlaczono   "
#define MSG_SELFTEST_HEATERTHERMISTOR       "Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER              "Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR            "Blad polaczenia"
#define MSG_SELFTEST_ENDSTOPS               "Endstops"
#define MSG_SELFTEST_MOTOR                  "Silnik"
#define MSG_SELFTEST_ENDSTOP                "Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT         "Endstop not hit"
#define MSG_SELFTEST_OK                     "Self test OK"

#define MSG_STATS_TOTALFILAMENT             "Filament lacznie :"
#define MSG_STATS_TOTALPRINTTIME            "Czas calkowity :"
#define MSG_STATS_FILAMENTUSED              "Filament :  "
#define MSG_STATS_PRINTTIME                 "Czas druku :  "

#define MSG_SELFTEST_START                  "Self test start  "
#define MSG_SELFTEST_CHECK_ENDSTOPS         "Kontrola endstops"
#define MSG_SELFTEST_CHECK_HOTEND           "Kontrola hotend  " 
#define MSG_SELFTEST_CHECK_X                "Kontrola X axis  "
#define MSG_SELFTEST_CHECK_Y                "Kontrola Y axis  "
#define MSG_SELFTEST_CHECK_Z                "Kontrola Z axis  "
#define MSG_SELFTEST_CHECK_BED              "Kontrola bed     "
#define MSG_SELFTEST_CHECK_ALLCORRECT       "Wszystko OK      "
#define MSG_SELFTEST                        "Selftest         "
#define MSG_SELFTEST_FAILED                 "Selftest nieudany"

#define MSG_STATISTICS                      "Statystyka  "
#define MSG_USB_PRINTING                    "Druk z USB  "

#define MSG_SHOW_END_STOPS                  "Pokaz krancowki"
#define MSG_CALIBRATE_BED                   "Kalibracja XYZ"
#define MSG_CALIBRATE_BED_RESET             "Reset kalibr. XYZ"
#define MSG_MOVE_CARRIAGE_TO_THE_TOP        "Kalibracja XYZ. Przekrec galke, aby przesunac os Z do gornych krancowek. Nacisnij, by potwierdzic."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z      "Kalibracja Z. Przekrec galke, aby przesunac os Z do gornych krancowek. Nacisnij, by potwierdzic."

#define MSG_CONFIRM_NOZZLE_CLEAN            		"Dla prawidl. kalibracji prosze oczyscic dysze. Potw. guzikiem."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP     		"Oba wozki dojechaly do gornej ramy?"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1  		"Szukam punktu kalibracyjnego podkladki"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2  		" z 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1   	"Poprawiam precyzyjnosc punktu kalibracyjnego"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2   	" z 9"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1		"Okreslam wysokosc odniesienia punktu kalibracyjnego"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2		" z 9"

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND           "Kalibr. XYZ nieudana. Kalibracyjny punkt podkladki nieznaleziony."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED            "Kalibracja XYZ niepowiedziona. Sprawdzic w instrukcji."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT                   "Kalibracja XYZ ok. Osie X/Y sa prostopadle."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD                 "Kalibracja XYZ w porzadku. Osie X/Y lekko skosne."
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME              "Osie X/Y sa mocno skosne. Skos bedzie aut. wyrownany przy druku."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR     "Kalibr. XYZ nieudana. Lewy przedni punkt zbyt do przodu. Wyrownac drukarke."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR    "Kalibr. XYZ nieudana. Prawy przedni punkt zbyt do przodu. Wyrownac drukarke."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR     "Kalibr. XYZ nieudana. Przed. punkty kalibr. zbyt do przodu. Wyrownac drukarke."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR    "Kalibracja XYZ niedokladna. Lewy przedni punkt zbyt wysuniety do przodu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR   "Kalibracja XYZ niedokladna. Prawy przedni punkt zbyt wysuniety do przodu."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR    "Kalibr. XYZ niedokladna. Przednie punkty kalibr. Zbyt wys. do przodu."
#define MSG_BED_LEVELING_FAILED_POINT_LOW                       "Kalibracja nieudana. Sensor nie dotknal. Zanieczysz. dysza? Czekam na reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH                      "Kalibracja Z nieudana. Sensor dotk. za wysoko. Czekam na reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED              "Kalibracja nieudana. Sensor odlaczony lub uszkodz. kabel. Czekam na reset."
#define MSG_NEW_FIRMWARE_AVAILABLE                              "Wyszla nowa wersja firmware:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE                         "Prosze zaktualizowac"
#define MSG_FOLLOW_CALIBRATION_FLOW                             "Drukarka nie zostala jeszcze skalibrowana. Prosze kierowac sie instrukcja, rozdzial Zaczynamy, podrozdzial Selftest."
#define MSG_BABYSTEP_Z_NOT_SET                                  "Odleglosc dyszy od podkladki nie jest skalibrowana. Postepuj zgodnie z instrukcja rozdzial Zaczynamy, podrozdzial Kalibracja pierwszej warstwy."
#define MSG_BED_CORRECTION_MENU                                 "Korekta podkladki"
#define MSG_BED_CORRECTION_LEFT                                 "W lewo  [um]"
#define MSG_BED_CORRECTION_RIGHT                                "W prawo [um]"
#define MSG_BED_CORRECTION_FRONT                                "Do przodu [um]"
#define MSG_BED_CORRECTION_REAR                                 "Do tylu  [um]"
#define MSG_BED_CORRECTION_RESET                                "Reset"

#define MSG_MENU_CALIBRATION									"Kalibracja"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF					"karta SD [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON					"karta SD[FlshAir]"
