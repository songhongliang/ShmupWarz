# Notes

I found little structural change required when porting the game from scala to genie.
This likely means that I wasn't fully using functuional caps of scala. This is true, the 
functional and framework (entitas) versions are very different. When using a framework, much
of the code flow is dictated by the framework. 
It also means that scala isn't a requirement.

Vala/Genie have a modicum of functional capability:
Inferred types for local vars.
Delegates. Top level and nested functions.
Built in list.
Gee has mapping functionality.

Genie is more accessable then scala. Gee data structures are comparable to Scala or Kotlin.
Differences between Genie and Scala remind me of the differences between Kotlin and Scala.

Scala is more elegant, but... the eight hundred pound jvm is in the room. 
Then there is the whole sbt vs gradle vs maven etc set of problems. Autovala is painless.

## status
all of the associate code has been ported for the Scala version. This includes
* shmupwarz-scala
* libgdx
* overlap2d-runtime-libgdx

working...just the core game. Next is getting the other screens working.