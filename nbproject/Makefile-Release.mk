#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/CtrlSesion.o \
	${OBJECTDIR}/CtrlUsuario.o \
	${OBJECTDIR}/CtrlMaterial.o \
	${OBJECTDIR}/CtrlPrestamo.o \
	${OBJECTDIR}/DtFecha.o \
	${OBJECTDIR}/DtFuncionario.o \
	${OBJECTDIR}/DtLector.o \
	${OBJECTDIR}/DtUsuario.o \
	${OBJECTDIR}/DtMaterial.o \
	${OBJECTDIR}/DtLibro.o \
	${OBJECTDIR}/DtRevista.o \
	${OBJECTDIR}/DtPrestamo.o \
	${OBJECTDIR}/Fabrica.o \
	${OBJECTDIR}/Funcionario.o \
	${OBJECTDIR}/Lector.o \
	${OBJECTDIR}/Libro.o \
	${OBJECTDIR}/Revista.o \
	${OBJECTDIR}/Prestamo.o \
	${OBJECTDIR}/Material.o \
	${OBJECTDIR}/ManejadorUsuario.o \
	${OBJECTDIR}/ManejadorMaterial.o \
	${OBJECTDIR}/ManejadorPrestamo.o \
	${OBJECTDIR}/Sesion.o \
	${OBJECTDIR}/Usuario.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/biblioteca.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/biblioteca.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/biblioteca ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/CtrlSesion.o: controladores/CtrlSesion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CtrlSesion.o controladores/CtrlSesion.cpp

${OBJECTDIR}/CtrlUsuario.o: controladores/CtrlUsuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CtrlUsuario.o controladores/CtrlUsuario.cpp

${OBJECTDIR}/CtrlMaterial.o: controladores/CtrlMaterial.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CtrlMaterial.o controladores/CtrlMaterial.cpp

${OBJECTDIR}/CtrlPrestamo.o: controladores/CtrlPrestamo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CtrlPrestamo.o controladores/CtrlPrestamo.cpp

${OBJECTDIR}/DtFecha.o: dt/DtFecha.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtFecha.o dt/DtFecha.cpp

${OBJECTDIR}/DtFuncionario.o: dt/DtFuncionario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtFuncionario.o dt/DtFuncionario.cpp

${OBJECTDIR}/DtLector.o: dt/DtLector.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtLector.o dt/DtLector.cpp

${OBJECTDIR}/DtUsuario.o: dt/DtUsuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtUsuario.o dt/DtUsuario.cpp

${OBJECTDIR}/DtMaterial.o: dt/DtMaterial.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtMaterial.o dt/DtMaterial.cpp

${OBJECTDIR}/DtLibro.o: dt/DtLibro.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtLibro.o dt/DtLibro.cpp

${OBJECTDIR}/DtRevista.o: dt/DtRevista.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtRevista.o dt/DtRevista.cpp

${OBJECTDIR}/DtPrestamo.o: dt/DtPrestamo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DtPrestamo.o dt/DtPrestamo.cpp

${OBJECTDIR}/Fabrica.o: Fabrica.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Fabrica.o Fabrica.cpp

${OBJECTDIR}/Funcionario.o: dominio/Funcionario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funcionario.o dominio/Funcionario.cpp

${OBJECTDIR}/Lector.o: dominio/Lector.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Lector.o dominio/Lector.cpp

${OBJECTDIR}/Libro.o: dominio/Libro.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Libro.o dominio/Libro.cpp

${OBJECTDIR}/Revista.o: dominio/Revista.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Revista.o dominio/Revista.cpp

${OBJECTDIR}/Prestamo.o: dominio/Prestamo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Prestamo.o dominio/Prestamo.cpp

${OBJECTDIR}/Material.o: dominio/Material.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Material.o dominio/Material.cpp

${OBJECTDIR}/ManejadorUsuario.o: manejadores/ManejadorUsuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ManejadorUsuario.o manejadores/ManejadorUsuario.cpp

${OBJECTDIR}/ManejadorMaterial.o: manejadores/ManejadorMaterial.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ManejadorMaterial.o manejadores/ManejadorMaterial.cpp

${OBJECTDIR}/ManejadorPrestamo.o: manejadores/ManejadorPrestamo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ManejadorPrestamo.o manejadores/ManejadorPrestamo.cpp

${OBJECTDIR}/Sesion.o: dominio/Sesion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sesion.o dominio/Sesion.cpp

${OBJECTDIR}/Usuario.o: dominio/Usuario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Usuario.o dominio/Usuario.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
