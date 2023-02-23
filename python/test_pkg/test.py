import pkg  # essentially it just copies the content of pkg/__init__.py here
            # so we really need to add pkg before the modules in pkg
pkg.a.func()
pkg.PKG_A.func()

import pkg.b as PKG_B  # we also manually load each module
PKG_B.b_func()

import a  # this is test_pkg.a module not test_pkg.pkg.a module
