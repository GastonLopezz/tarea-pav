Usuario
Conversacion(grupal,privada)
Mensaje(simple,multimedia,contacto)
ControladorSesion
ControladorUsuario
ControladorMensaje
IControladorSesion
IControladorUsuario
IControladorMensaje
Factory
Fecha
Hora


#ifndefine
#define “Usuario.h”
#include “Conversacion.h”
#include <string>

class Usuario{
  private:
    celular: string;
    nombre: string;
    fechaReg: fecha;
    imgPerfil: imagen; //?
    descripcion: string;
    ultVez: hora;
    listaConversaciones: conversacion; //?
  public:
   Usuario();
   Usuario(string celular, string nombre, fecha fechaReg, imagen imgPerfil, string descripcion, ultVez hora);
   void setCelular(string c);
   string getCelular();
   void setNombre(string n);
   string getNombre();
   void setfechaReg(fecha f);
   fecha getfechaReg();
   void setimgPerfil(imagen i);
   imagen getimgPerfil(); //?
   void setDescripcion(string d);
   string getDescripcion();
   ~Usuario();
}
#endif


#ifndefine
#define “Conversacion.h”
#include “Mensaje.h”

class Conversacion{
  private:
   historial: mensaje;
   archivada: bool;
  public:
   Conversacion();
   Conversacion(mensaje historial, bool archivada);
   void setArchivada(bool b);
   bool getArchivada();
   ~Conversacion();
}
#endif


#ifndefine
#define “Mensaje.h”

class Mensaje{
  private:
   codigo: int;
   fechaEnviado: fecha;
   horaEnviado: hora;
  public:
   Mensaje();
   Mensaje(int codigo, fecha fechaEnv, hora horaEnv);
   void getCodigo(int c);
   int setCodigo();
   void getFechaEnviado(fecha f);
   fecha setFechaEnviado();
   void getHoraEnviado(hora h);
   ~Conversacion();
}
#endif


#ifndefine
#define “MensajeSimple.h”
#include “Mensaje.h”

class MensajeSimple : public Mensaje{
  private:
   texto: string;
  public:
   MensajeSimple()
   MensajeSimple(string texto);
   void setTexto(string t);
   string setTexto();
   ~MensajeSimple()
}
#endif


#ifndefine
#define “MensajeMultimedia.h”
#include “Mensaje.h”

class MensajeMultimedia : public Mensaje{
  private:
   foto: imagen;
   video: video;
   texto: string;
  public:
   MensajeMultimedia();
   MensajeMultimedia(imagen foto, video video, string texto);
   void setTexto(string t);
   string getTexto();
   ~MensajeMultimedia();
}
#endif