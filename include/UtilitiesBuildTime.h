#ifndef D_UtilitiesBuildTime_H
#define D_UtilitiesBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  UtilitiesBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class UtilitiesBuildTime
  {
  public:
    explicit UtilitiesBuildTime();
    virtual ~UtilitiesBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    UtilitiesBuildTime(const UtilitiesBuildTime&);
    UtilitiesBuildTime& operator=(const UtilitiesBuildTime&);

  };

#endif  // D_UtilitiesBuildTime_H
