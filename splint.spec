# splint.spec

Summary:        Splint - A tool for statically checking C programs
Name:           splint
Version:        3.1.2
Release:        2%{?dist}
License:        GPLv2+
Url:            http://www.splint.org

Group:          Development/Tools
Source:         %{name}-%{version}.tar.gz
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}
BuildRequires:  bison flex flex-devel gcc

Obsoletes:      lclint <= 3.0.0
Provides:       lclint = %{version}-%{release}
Provides:       splint = %{version}-%{release}
Provides:       splint(%{_arch}) = %{version}-%{release}

%description
Splint is a tool for statically checking C programs for security vulnerabilities 
and common programming mistakes. With minimal effort, Splint can be used as a 
better lint(1).If additional effort is invested adding  annotations  to  programs,  
Splint can perform stronger checks than can be done by any standard lint.  For 
full documentation, please see http://www.splint.org.

Please set environment variables:
- LARCH_PATH=%{_datadir}/splint/lib
  and
- LCLIMPORTDIR=%{_datadir}/splint/imports

%prep
%setup -q
chmod 644 doc/manual.pdf     # TODO: this line should remove in the future
cp -p src/.splintrc splintrc.demo

%build
test ! -f configure && ./bootstrap
CFLAGS="$CFLAGS $RPM_OPT_FLAGS"
%configure
make -j `nproc`

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%post

%preun

%clean
make clean

%files
%defattr(-,root,root,-)
%doc README.md doc/manual.pdf splintrc.demo
%license LICENSE
%{_bindir}/splint
%{_mandir}/man1/*.1*
%dir %{_datadir}/splint
%{_datadir}/splint/*

%define __debug_install_post \
    %{_rpmconfigdir}/find-debuginfo.sh %{?_find_debuginfo_opts} "%{_builddir}/%{?buildsubdir}"\
%{nil}

%changelog
* Tue Spe 07 2021 Weilun Fong <wlf@zhishan-iot.tk> - 3.1.2-2
- Refactor the whole .spec file, make it more readable and maintainable
- Improve provides list and filelist

* Mon May 20 2002 Heiko Abraham <abrahamh@web.de> - 3.1.2-1
- Contribute splint.spec
