/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       LedPolsador                           **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 23/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                //Inicia el bloc
// inicia pin 13 com a sortida:
  pinMode(13, OUTPUT);
// initialize inicia pin 4 com a entrada:
  pinMode(4, INPUT);

}                             //Finalitza el bloc

//*************************** LOOP ******************************

void loop() {                 // inicia el bucle del programa
 // Llegeix estat entrades:
  digitalRead(4);

  // Comprova estat polsador.
  // SI polsador apretat:
  if (digitalRead(4),HIGH) {
    // Encen LED:
    digitalWrite(13, HIGH);
  } else {
    // En qualsevol altre cas apaga LED:
    digitalWrite(13, LOW);
  }

}                          //Finalitza el bloc

//************************** FUNCIONS ***************************
