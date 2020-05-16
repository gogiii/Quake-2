/*
Copyright (C) 1997-2001 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
/*
** QGL_WIN.C
**
** This file implements the operating system binding of GL to QGL function
** pointers.  When doing a port of Quake2 you must implement the following
** two functions:
**
** QGL_Init() - loads libraries, assigns function pointers, etc.
** QGL_Shutdown() - unloads libraries, NULLs function pointers
*/
#include <float.h>
#include "gl_local.h"
#include "glw_win_test.h"

/*PFNWGLSWAPINTERVALEXTPROC wglSwapIntervalEXT;
PFNWGLCHOOSEPIXELFORMATARBPROC wglChoosePixelFormatARB;

PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;
PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;

PFNGLPOINTPARAMETERFPROC glPointParameterf;
PFNGLPOINTPARAMETERFVPROC glPointParameterfv;

PFNGLACTIVETEXTUREPROC glActiveTexture;
PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;

PFNGLCOLORTABLEPROC glColorTable;*/

/*
** QGL_Shutdown
**
** Unloads the specified DLL then nulls out all the proc pointers.
*/
void QGL_Shutdown( void )
{
	/*if ( glw_state.hinstOpenGL )
	{
		FreeLibrary( glw_state.hinstOpenGL );
		glw_state.hinstOpenGL = NULL;
	}

	glw_state.hinstOpenGL = NULL;*/

}

#	pragma warning (disable : 4113 4133 4047 )
//#	define GPA( a ) GetProcAddress( glw_state.hinstOpenGL, a )

/*
** QGL_Init
**
** This is responsible for binding our gl function pointers to 
** the appropriate GL stuff.  In Windows this means doing a 
** LoadLibrary and a bunch of calls to GetProcAddress.  On other
** operating systems we need to do the right thing, whatever that
** might be.
** 
*/
qboolean QGL_Init( const char *dllname )
{
	// update 3Dfx gamma irrespective of underlying DLL
	/*{
		char envbuffer[1024];
		float g;

		g = 2.00 * ( 0.8 - ( vid_gamma->value - 0.5 ) ) + 1.0F;
		Com_sprintf( envbuffer, sizeof(envbuffer), "SSTV2_GAMMA=%f", g );
		putenv( envbuffer );
		Com_sprintf( envbuffer, sizeof(envbuffer), "SST_GAMMA=%f", g );
		putenv( envbuffer );
	}

	if ( ( glw_state.hinstOpenGL = LoadLibrary( dllname ) ) == 0 )
	{
		char *buf = NULL;

		FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, NULL, GetLastError(), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), (LPTSTR) &buf, 0, NULL);
		ri.Con_Printf( PRINT_ALL, "%s\n", buf );
		return false;
	}*/

	gl_config.allow_cds = true;

	/*wglSwapIntervalEXT = wglGetProcAddress("wglSwapIntervalEXT");
	glLockArraysEXT = wglGetProcAddress("glLockArraysEXT");
	glUnlockArraysEXT = wglGetProcAddress("glUnlockArraysEXT");
	glPointParameterf = wglGetProcAddress("glPointParameterf");
	glPointParameterfv = wglGetProcAddress("glPointParameterfv");
	glActiveTexture = wglGetProcAddress("glActiveTexture");
	glClientActiveTexture = wglGetProcAddress("glClientActiveTexture");
	glMultiTexCoord2f = wglGetProcAddress("glMultiTexCoord2f");
	glColorTable = wglGetProcAddress("glColorTable");*/

	return true;
}

void GLimp_EnableLogging( qboolean enable )
{
	if ( enable )
	{
		/*if ( !glw_state.log_fp )
		{
			struct tm *newtime;
			time_t aclock;
			char buffer[1024];

			time( &aclock );
			newtime = localtime( &aclock );

			asctime( newtime );

			Com_sprintf( buffer, sizeof(buffer), "%s/gl.log", ri.FS_Gamedir() ); 
			glw_state.log_fp = fopen( buffer, "wt" );

			fprintf( glw_state.log_fp, "%s\n", asctime( newtime ) );
		}*/
	}
}


void GLimp_LogNewFrame( void )
{
	//fprintf( glw_state.log_fp, "*** R_BeginFrame ***\n" );
}

#pragma warning (default : 4113 4133 4047 )
#pragma warning (disable : 4996)


