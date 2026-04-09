\vspace*{10px}
	
	\begin{center}	
		\fontsize{17}{17} \textbf{ Laboratorio \itemPracticeNumber}
	\end{center}
	\centerline{\textbf{\Large Tema: \itemTheme}}
	%\vspace*{0.5cm}	

\begin{table}[H]
		\begin{tabular}{|x{4.7cm}|x{4.8cm}|x{4.8cm}|}
			\hline 
			\rowcolor{tablebackground}
			\color{white} \textbf{Alumno} & \color{white}\textbf{Carrera Profesional}  & \color{white}\textbf{Asignatura}   \\
			\hline 
			{\itemTeacher \par \itemEmail} & \itemSchool & {\itemCourse}    \\
			\hline 
		\end{tabular}
	\end{table}		
	\begin{table}[H]
		\begin{tabular}{|x{3cm}|x{6.5cm}|x{4.8cm}|}
			\hline 
			\rowcolor{tablebackground}
			\color{white}\textbf{Laboratorio} & \color{white}\textbf{Tema}  & \color{white}\textbf{Duración}   \\
			\hline 
			\itemPracticeNumber & \itemTheme & 04 horas   \\
			\hline 
		\end{tabular}
	\end{table}


	\begin{table}[H]
		\begin{tabular}{|x{4.7cm}|x{4.8cm}|x{4.8cm}|}
			\hline 
			\rowcolor{tablebackground}
			\color{white}\textbf{Semestre académico} & \color{white}\textbf{Fecha de inicio}  & \color{white}\textbf{Fecha de entrega}   \\
			\hline 
			\itemAcademic & \itemInput &  \itemOutput  \\
			\hline 
		\end{tabular}
	\end{table}
	
%	
	\tableofcontents 

\clearpage

	\section{Especificaciones del Laboratorio}	
	
	\subsection{Objetivos del laboratorio}
	\begin{itemize}
		\item Analizar un problema de programación.
		\item Diseñar pseudocódigos, diagramas de flujo, etc. que permitan describir la solución que queremos proponer.
		\item Implementar todas las soluciones factibles en un lenguaje de programación.
		\item Envíar sus implementaciones a la plataforma OmegaUp.

	\end{itemize}	
	\subsection{Equipos, materiales y temas}
	\begin{itemize}
		\item Sistema Operativo {\tt Windows}: Windows 10
		\item Editor de texto plano {\tt C++} 5.11
		\item Cuenta en {\tt GitHub} asociada al correo institucional.		
	\end{itemize}


	\section{Marco teórico}	
	\subsection{OmegaUp}
	\begin{itemize}
	\item OmegaUp es una organización sin fines de lucro dedicada a brindar a los estudiantes desatendidos de América Latina las habilidades y el conocimiento que necesitan para tener éxito en el mundo actual impulsado por la tecnología.
	\item omegaUp ofrece contenido educativo gratuito de Ciencias de la Computación de alta calidad a más de 50.000 estudiantes en América Latina a través de nuestra plataforma en línea \url{https://omegaup.com/}.
	\item Participa en concursos de programación y pon a prueba tus conocimientos.
	\item Resuelve problemas y mejora tus habilidades.
	\item Organiza tu concurso con problemas que están disponibles en la plataforma o crea tus propios problemas.
	\item Sigue el progreso de tus estudiantes a través de tareas y exámenes que se evalúan automáticamente.
	\end{itemize}
	\subsection{Contratación Dinámica}
	\begin{itemize}
	\item ID: 22663
	\item Título: Contratación Dinámica 
	\item Nivel Básico: Introducción en la programación.
	\item Calidad: Bueno.
	\item Dificultad: Medio.
	\item Ratio: 25.63% (285/1112)
	\item Temas: Cálculos aitméticos, Ciclos, Implementación, Recursión.
	\begin{table}[H]
		\caption{22663 Contratación Dinámica}
		\setlength{\tabcolsep}{0.5em} % for the horizontal padding
		{\renewcommand{\arraystretch}{1.5}% for the vertical padding
		\begin{tabular}{|p{5cm}|p{2cm}|x{5cm}|x{2cm}|}
			\hline
			{\textbf{Puntos}} & 12.26  & \textbf{{Límite de Memoria}} & 32 MiB \\
			\hline 
			{\textbf{Límite de tiempo (caso)}} & 1s  & {\textbf{Límite de tiempo (total)}} & 1m0s \\ 
			\hline
			{\textbf{Tamaño límite de entrada (bytes)}} & 48828.125 KiB  &  & \\ 
			\hline 		
		\end{tabular}
		}
	\end{table}	
	\item Daniel, el gerente de la biblioteca, necesita un método para decidir cuántos empleados de reserva necesita cada día. Para optimizar recursos, basa su decisión en el número de solicitudes de los días más recientes.
	\item Su sistema funciona de la siguiente manera: cada día, analiza un período que abarca los últimos K días de actividad (incluyendo el día actual). Dentro de ese período, identifica la jornada con el mayor número de solicitudes.
	\item {\tt{Por ejemplo}}: Considere el entero poditivo 24. Sumar 2 y 4 resulta en 6. Ya que 6 es un solo digito, 6 es la raiz digital de 24. Ahora considere el entero positivo 39. Sumar 3 y 9 resulta en 12. Ya que 12 no es un solo digito, el proceso debe ser repetido. Sumando 1 y 2 resulta en 3, de un solo digito y por tanto la raiz digital de 39.
	\item {\tt{Entrada}}
	\item La primera línea contiene dos enteros N y K, el total de días registrados y la duración del período de análisis, respectivamente.
	\item La segunda línea contiene N enteros, que representan el número de solicitudes para el día i .
	
	\end{itemize}
	\begin{table}[H]
		\caption{22663.Contratación Dinámica}
		\setlength{\tabcolsep}{0.5em} % for the horizontal padding
		{\renewcommand{\arraystretch}{1.5}% for the vertical padding
		\begin{tabular}{|p{5cm}|x{5cm}|}
			\hline
			{\textbf{Entrada}} & {\textbf{Salida}}  \\
			\hline 
			4  & 6 \\
			\hline 
			39 & 3 \\
			\hline 
			0 & \\
			\hline 		
		\end{tabular}
		}
	\end{table}	
	
	
	\clearpage

	\section{Guía de laboratorio}	
	
	\subsection{Directorio de trabajo personal}
	\begin{itemize}	
		\item Cree su directorio de trabajo personal. (Debe utilizar su usuario institucional.)
		\item Luego, diríjase a este directorio.
	\end{itemize}
	\begin{lstlisting}[language=bash,caption={Creando directorio personal}][H]
		$ mkdir -p $HOME/r.escobedo/
	\end{lstlisting}		
	\begin{lstlisting}[language=bash,caption={Dirijíendonos al directorio personal}][H]
		$ cd $HOME/r.escobedo/
	\end{lstlisting}
	
	\subsection{Repositorio local}
	\begin{itemize}		
		\item Clone su repositorio remoto.
		\item Luego, diríjase a este directorio.
	\end{itemize}
	\begin{lstlisting}[language=bash,caption={Clonando repositoio remoto}][H]
		$ git clone https://github.com/DiegoCcoyaccoya/lp1.git
	\end{lstlisting}		
	\begin{lstlisting}[language=bash,caption={Dirijíendonos al directorio del repositorio local}][H]
	\end{lstlisting}		
	
	\subsection{Directorio del laboratorio}
	\begin{itemize}		
		\item Cree un directorio para el laboratorio correspondiente, dentro del directorio para el repositorio local. (Utilizar el estándar \textcolor{red}{})
		\item Luego, diríjase a este directorio.
	\end{itemize}
	\begin{lstlisting}[language=bash,caption={Creando directorio para este laboratorio}][H]
		$ mkdir -p $HOME/r.escobedo/lp1/lab01/exercises/
	\end{lstlisting}
	\begin{lstlisting}[language=bash,caption={Dirijíendonos al directorio del laboratorio}][H]
		$ cd $HOME/r.escobedo/lp1/lab01
	\end{lstlisting}
	
	\subsection{Archivo .gitignore}
	\begin{itemize}	
		\item Siempre evalue utilizar el archivo {\tt .gitignore} para no hacer seguimiento a archivos innecesarios, esto es muy importante sobre todo para ignorarlos en el repositorio GitHub.
		\item Pueden haber varios de estos archivos y estar ubicados estratégicamente en algún directorio; por ejemplo sólo para el laboratorio o para todo el repositorio local.
	\end{itemize}

	\begin{lstlisting}[language=bash,caption={Creando .gitignore específico para el laboratorio}][H]
		$ vim $HOME/r.escobedo/lp1/lab01/.gitignore
	\end{lstlisting}

	\subsubsection{Envío a omegaUp}
	\begin{itemize}	
	\item Para envíar la implementación de sus propuestas, primero seleccione el lenguaje de programación utilizado.
	\begin{itemize}
		\item C++20 (g++ 10.3)
		\item C\# (10, dotnet 6.0)
		\item Go (1.18.beta2)
		\item Haskell (ghc 8.8)
		\item \textbf{Java (openjdk 16.0)}
		\item JavaScript (Node.js 16)
		\item Kotlin (1.6.10)
		\item Lua (5.3)
		\item Python (3.9)
		\item Ruby (2.7)
		\item Rust (1.56.1)
	\end{itemize}	
	\item Luego, copie el código en la pestaña {\tt{code: Main.java}}. Recuerde que en \tt{Java} el nombre de la clase que tiene el método \tt{main()} debe ser el mismo que el nombre del archivo \tt{*.java}.
	\item Ejecute el código haciendo clic en el botón \tt{Run}.
	\item Si no hay errores, envíe la solución, haciendo clic en el botón \tt{Submit}.
	\item En la parte inferior ud. podra visualizar el estado de sus envíos.
	\end{itemize}		
	
	\begin{figure}[H]
		\centering
		\includegraphics[width=0.9\textwidth,keepaspectratio]{img/omegaUp_envios.png}		
		\caption{Envíos en omegaUp}
	\end{figure}
	
\clearpage

\section{Tarea}

\subsection{Descripción}	

	\begin{itemize}
		\item Elabore un informe individual, para otro problema, reutilizando la presente guía de laboratorio pero con el lenguaje de programación C++.	
		\item Siempre piense en las posibilidades de realizar otras implemetaciones particulares.
		\item Envíe satisfactoriamente todas sus implementaciones a la plataforma omegaUp.
		\item Utilice todas las recomendaciones dadas por el docente:
		\begin{itemize}
		\item Antecedentes: Describir antecedentes previos que sean necesarios para desarrollar el laboratorio. (Las entregadas por el docente y/o las que se buscaron personalmente).
		\item Commits: Elaborar la lista de envíos que permitiran culminar el laboratorio. (Previo a la implementación)		
		\item Source: Explicar porciones de código fuente importantes, trascendentales que permitieron resolver el laboratorio y que reflejen su particularidad única. (Sólo en trabajos grupales se permite duplicidad)
		\item Ejecución: Muestra comandos, capturas de pantalla, explicando la forma de replicar y ejecutar el entregable del laboratorio.
		\end{itemize}
	\end{itemize}
	
\subsection{Pregunta}	
								
	\begin{itemize}
		\item ¿Cómo podríamos saber con exactitud, cuál de todas las propuestas algorítmicas es la más óptima?. Explíque.
	\end{itemize}
		
	\clearpage	


\subsection{Entregables}
	\begin{itemize}			
		\item URL al directorio específico del laboratorio en su repositorio GitHub privado donde esté todo el código fuente y otros que sean necesarios.  Evitar la presencia de archivos: binarios,  objetos,  archivos temporales,  cache, librerias, entornos virtuales.  Si hay configuraciones particulares puede incluir archivos de especificación como: packages.json, requirements.txt o README.md.
		\item No olvide que el profesor debe ser siempre colaborador a su repositorio que debe ser privado (Usuario del profesor \textbf{@rescobedoulasalle}).
		\item El informe debe estar elabórado en \LaTeX
		\item Usted debe describir sólo los \textbf{commits} más importantes que marcaron hitos en su trabajo,  adjutando capturas de pantalla,  del commit,  porciones de código fuente, evidencia de sus ejecuciones y pruebas.
		\item En el informe siempre se debe explicar las imágenes (código fuente, capturas de pantalla,  commits,  ejecuciones,  pruebas,  etc.) con descripciones puntuales pero precisas.
		\item Agregar la estructura de directorios y archivos de su laboratorio hasta el nivel 4.
	\end{itemize}	

\begin{lstlisting}[style=ascii-tree]
r.escobedo/
|--- lp1
|		|--- README.md
|		|--- .gitignore
|		|--- lab01
|				|--- README.md
|				|--- .gitignore
|				|--- DigitalRoot_01.cpp
|				|--- DigitalRoot_02.cpp
|				|--- DigitalRoot_03.cpp
|				|--- DigitalRoot_04.cpp
|				|--- DigitalRoot_05.cpp
|				|--- exercises
|						|--- DigitalRoot_01.java
|						|--- DigitalRoot_02.java
|						|--- DigitalRoot_03.java
|						|--- DigitalRoot_04.java
|						|--- DigitalRoot_05.java
|				|--- latex
|						|--- r.escobedo_lp1_26a_lab01.tex
|						|--- r.escobedo_lp1_26a_lab01.pdf
\end{lstlisting} 		

\section{Rúbricas}
			
	\subsection{Contenido del Informe}
	\begin{itemize}			
		\item El alumno deberá autocalificarse, marcando o dejando en blanco las celdas de la columna \textbf{Checklist}, deacuerdo a si cumplió o no con el ítem correspondiente.
		\item Si un alumno supera la fecha de entrega, su calificación siempre será sobre la nota mínima aprobatoria, siempre y cuando cumpla con todos lo items. (Máximo 24 horas)
		\item El alumno debe autocalificarse en la columna \textbf{Estudiante} de acuerdo a la tabla de calificación de niveles de desempeño:
	
		\begin{table}[ht]
			\caption{Niveles de desempeño}
			\begin{center}
			\begin{tabular}{ccccc}
    			\hline
    			 & \multicolumn{4}{c}{Nivel}\\
    			\cline{1-5}
    			\textbf{Puntos} & Insatisfactorio 25\%& En Proceso 50\% & Satisfactorio 75\% & Sobresaliente 100\%\\
    			\textbf{2.0}&0.5&1.0&1.5&2.0\\
    			\textbf{4.0}&1.0&2.0&3.0&4.0\\
    		\hline
			\end{tabular}
		\end{center}
	\end{table}	
	
	\end{itemize}
	
	\begin{table}[H]
		\caption{Rúbrica para contenido del Informe y evidencias}
		\setlength{\tabcolsep}{0.5em} % for the horizontal padding
		{\renewcommand{\arraystretch}{1.5}% for the vertical padding
		%\begin{center}
		\begin{tabular}{|p{2.7cm}|p{7cm}|x{1.3cm}|p{1.2cm}|p{1.5cm}|p{1.1cm}|}
			\hline
    		\multicolumn{2}{|c|}{Contenido y demostración} & Puntos & Checklist & Estudiante & Profesor\\
			\hline
			\textbf{1. GitHub} & Repositorio se pudo clonar y se evidencia la estructura adecuada para revisar los entregables. (Se descontará puntos por error o observación) &4 & & 1 & \\ 
			\hline
			\textbf{2. Commits} &  Hay porciones de código fuente asociado a los commits planificados con explicaciones detalladas. (El profesor puede preguntar para refrendar calificación). &4 & &1 & \\ 
			\hline 
			\textbf{3. Ejecución} & Se incluyen comandos de ejecuciones y pruebas del ejecutable asociadas a código fuente explicadas gradualmente que permitirían replicar el proyecto. (Se descontará puntos por cada omisión) &4 & &1 & \\ 
			\hline			
			\textbf{4. Pregunta} & Se responde con completitud a la pregunta formulada en la tarea.  (El profesor puede preguntar para refrendar calificación).  &2 & &0 & \\ 
			\hline				
			\textbf{7. Ortografía} & El documento no muestra errores ortográficos. (Se descontará puntos por error encontrado) &2 & &1 & \\ 
			\hline 
			\textcolor{red}{\textbf{8. Madurez}} & \textcolor{blue}{El Informe muestra de manera general una evolución de la madurez del código fuente con explicaciones puntuales pero precisas, agregando diagramas generados a partir del código fuente y refleja un acabado impecable. (El profesor puede preguntar para refrendar calificación).}  &\textcolor{blue}{4} & &1 & \\ 
			\hline
			\multicolumn{2}{|c|}{\textbf{Total}} &20 & & & \\ 
			\hline
		\end{tabular}
		%\end{center}
		%\label{tab:multicol}
		}
	\end{table}

\clearpage

\section{Referencias}
\begin{itemize}			
	\item \url{https://omegaup.com/arena/problem/Contratacion-Dinamica/#problems}
\end{itemize}

\printindex
