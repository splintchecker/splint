%define prefix /usr
%define ver    3.0.1.6
Summary:   Splint - A tool for statically checking C programs
Name:      splint
Version:   %ver
Release:   1
Copyright: MIT
Url:       http://www.splint.org

Packager:  Heiko Abraham, abrahamh@web.de
Group:     Development/Languages
Source:    %{name}-%{ver}.src.tgz

BuildRoot: /var/tmp/%{name}-%{PACKAGE_VERSION}-root
Requires:  gcc





%description
Splint  is a tool for statically checking C programs for security vulnerabilities 
and common programming mistakes. With minimal effort, Splint can be used as a 
better lint(1).If additional effort is invested adding  annotations  to  programs,  
Splint can perform stronger checks than can be done by any standard lint.  For 
full documentation, please see http://www.splint.org.  

Please set environment variables:
- LARCH_PATH=%{prefix}/share/splint/lib
  and
- LCLIMPORTDIR=%{prefix}/share/splint/imports
.

%prep
%setup -q

%build
CFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%{prefix}
make

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT%{prefix}/bin
mkdir -p $RPM_BUILD_ROOT%{prefix}/share/doc/%{name}-%{PACKAGE_VERSION}
mkdir -p $RPM_BUILD_ROOT%{prefix}/share/splint/imports
mkdir -p $RPM_BUILD_ROOT%{prefix}/share/splint/lib
mkdir -p $RPM_BUILD_ROOT%{prefix}/share/man/man1

make DESTDIR=$RPM_BUILD_ROOT  install

# now install docs, why 'make install' will not do this
cp README     $RPM_BUILD_ROOT%{prefix}/share/doc/%{name}-%{PACKAGE_VERSION}
cp doc/*.html $RPM_BUILD_ROOT%{prefix}/share/doc/%{name}-%{PACKAGE_VERSION}
cp doc/*.pdf  $RPM_BUILD_ROOT%{prefix}/share/doc/%{name}-%{PACKAGE_VERSION}



%post

%preun



%clean
rm -rf $RPM_BUILD_ROOT/*
rm -rf $RPM_BUILD_DIR/%{name}-%{PACKAGE_VERSION}/*




%files
%{prefix}/bin/splint
%{prefix}/share/splint/imports/*
%{prefix}/share/splint/lib/*
%{prefix}/share/doc/%{name}-%{PACKAGE_VERSION}/*






