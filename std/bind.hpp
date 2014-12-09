#pragma once
#include "common_defines.hpp"
#include "target_os.hpp"

#ifdef new
#undef new
#endif

#ifdef CPP11_IS_SUPPORTED

#include <functional>
using std::bind;
using std::ref;
using std::cref;
using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;
using std::placeholders::_4;
using std::placeholders::_5;
using std::placeholders::_6;
using std::placeholders::_7;
using std::placeholders::_8;

#else

#ifdef OMIM_OS_WINDOWS
  #define BOOST_BIND_ENABLE_STDCALL
#endif

#include <boost/bind.hpp>
using boost::bind;
using boost::ref;
using boost::cref;

#endif

#ifdef DEBUG_NEW
#define new DEBUG_NEW
#endif
