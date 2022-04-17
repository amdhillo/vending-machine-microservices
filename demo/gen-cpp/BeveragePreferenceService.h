/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef BeveragePreferenceService_H
#define BeveragePreferenceService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "vending_machine_types.h"

namespace vending_machine {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class BeveragePreferenceServiceIf {
 public:
  virtual ~BeveragePreferenceServiceIf() {}
  virtual void GetBeverage(std::string& _return, const std::string& btype) = 0;
};

class BeveragePreferenceServiceIfFactory {
 public:
  typedef BeveragePreferenceServiceIf Handler;

  virtual ~BeveragePreferenceServiceIfFactory() {}

  virtual BeveragePreferenceServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(BeveragePreferenceServiceIf* /* handler */) = 0;
};

class BeveragePreferenceServiceIfSingletonFactory : virtual public BeveragePreferenceServiceIfFactory {
 public:
  BeveragePreferenceServiceIfSingletonFactory(const ::std::shared_ptr<BeveragePreferenceServiceIf>& iface) : iface_(iface) {}
  virtual ~BeveragePreferenceServiceIfSingletonFactory() {}

  virtual BeveragePreferenceServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(BeveragePreferenceServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<BeveragePreferenceServiceIf> iface_;
};

class BeveragePreferenceServiceNull : virtual public BeveragePreferenceServiceIf {
 public:
  virtual ~BeveragePreferenceServiceNull() {}
  void GetBeverage(std::string& /* _return */, const std::string& /* btype */) {
    return;
  }
};

typedef struct _BeveragePreferenceService_GetBeverage_args__isset {
  _BeveragePreferenceService_GetBeverage_args__isset() : btype(false) {}
  bool btype :1;
} _BeveragePreferenceService_GetBeverage_args__isset;

class BeveragePreferenceService_GetBeverage_args {
 public:

  BeveragePreferenceService_GetBeverage_args(const BeveragePreferenceService_GetBeverage_args&);
  BeveragePreferenceService_GetBeverage_args& operator=(const BeveragePreferenceService_GetBeverage_args&);
  BeveragePreferenceService_GetBeverage_args() : btype() {
  }

  virtual ~BeveragePreferenceService_GetBeverage_args() noexcept;
  std::string btype;

  _BeveragePreferenceService_GetBeverage_args__isset __isset;

  void __set_btype(const std::string& val);

  bool operator == (const BeveragePreferenceService_GetBeverage_args & rhs) const
  {
    if (!(btype == rhs.btype))
      return false;
    return true;
  }
  bool operator != (const BeveragePreferenceService_GetBeverage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BeveragePreferenceService_GetBeverage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class BeveragePreferenceService_GetBeverage_pargs {
 public:


  virtual ~BeveragePreferenceService_GetBeverage_pargs() noexcept;
  const std::string* btype;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BeveragePreferenceService_GetBeverage_result__isset {
  _BeveragePreferenceService_GetBeverage_result__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _BeveragePreferenceService_GetBeverage_result__isset;

class BeveragePreferenceService_GetBeverage_result {
 public:

  BeveragePreferenceService_GetBeverage_result(const BeveragePreferenceService_GetBeverage_result&);
  BeveragePreferenceService_GetBeverage_result& operator=(const BeveragePreferenceService_GetBeverage_result&);
  BeveragePreferenceService_GetBeverage_result() : success() {
  }

  virtual ~BeveragePreferenceService_GetBeverage_result() noexcept;
  std::string success;
  ServiceException se;

  _BeveragePreferenceService_GetBeverage_result__isset __isset;

  void __set_success(const std::string& val);

  void __set_se(const ServiceException& val);

  bool operator == (const BeveragePreferenceService_GetBeverage_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const BeveragePreferenceService_GetBeverage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const BeveragePreferenceService_GetBeverage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _BeveragePreferenceService_GetBeverage_presult__isset {
  _BeveragePreferenceService_GetBeverage_presult__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _BeveragePreferenceService_GetBeverage_presult__isset;

class BeveragePreferenceService_GetBeverage_presult {
 public:


  virtual ~BeveragePreferenceService_GetBeverage_presult() noexcept;
  std::string* success;
  ServiceException se;

  _BeveragePreferenceService_GetBeverage_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class BeveragePreferenceServiceClient : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  BeveragePreferenceServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetBeverage(std::string& _return, const std::string& btype);
  void send_GetBeverage(const std::string& btype);
  void recv_GetBeverage(std::string& _return);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class BeveragePreferenceServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<BeveragePreferenceServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (BeveragePreferenceServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_GetBeverage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  BeveragePreferenceServiceProcessor(::std::shared_ptr<BeveragePreferenceServiceIf> iface) :
    iface_(iface) {
    processMap_["GetBeverage"] = &BeveragePreferenceServiceProcessor::process_GetBeverage;
  }

  virtual ~BeveragePreferenceServiceProcessor() {}
};

class BeveragePreferenceServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  BeveragePreferenceServiceProcessorFactory(const ::std::shared_ptr< BeveragePreferenceServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< BeveragePreferenceServiceIfFactory > handlerFactory_;
};

class BeveragePreferenceServiceMultiface : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceMultiface(std::vector<std::shared_ptr<BeveragePreferenceServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~BeveragePreferenceServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<BeveragePreferenceServiceIf> > ifaces_;
  BeveragePreferenceServiceMultiface() {}
  void add(::std::shared_ptr<BeveragePreferenceServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void GetBeverage(std::string& _return, const std::string& btype) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->GetBeverage(_return, btype);
    }
    ifaces_[i]->GetBeverage(_return, btype);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class BeveragePreferenceServiceConcurrentClient : virtual public BeveragePreferenceServiceIf {
 public:
  BeveragePreferenceServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  BeveragePreferenceServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetBeverage(std::string& _return, const std::string& btype);
  int32_t send_GetBeverage(const std::string& btype);
  void recv_GetBeverage(std::string& _return, const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
