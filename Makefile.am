DIST_SUBDIRS = base gtk data

if AIK_FE_GTK
GTKSRCDIR = gtk
else
GTKSRCDIR = 
endif

SUBDIRS = base $(GTKSRCDIR) data

PHPSOURCES = php/*.png php/*.php php/*.phps

COCOASOURCES = cocoa/*.lproj cocoa/*.png cocoa/*.icns cocoa/*.ai \
	cocoa/app \
	cocoa/fmwk \
	cocoa/Aiksaurus.pbproj/project.pbxproj \
	cocoa/main.m

WINSOURCES = win/src/*.*

EXTRA_DIST =	\
	$(PHPSOURCES)			\
	$(COCOASOURCES)			\
	$(WINSOURCES)			\
	README.W32			\
	autogen.sh			\
	ac-helpers/pkg-config/pkg.m4	\
	aiksaurus.spec.in		\
	aiksaurus.spec
