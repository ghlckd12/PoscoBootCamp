#include <string>

using namespace std;

class CustomerData
{
	private:
		string m_id;
		string m_name;
		string m_accNum;
		string m_phoneNum;
		string m_manageId;

	public:
		void SetId(string id) { m_id = id; }
		string GetId() { return m_id; }

		void SetName(string name) { m_name = name; }
		string GetName() { return m_name; }

		void SetAccNum(string accNum) { m_accNum = accNum; }
		string GetAccNum() { return m_accNum; }

		void SetPhoneNum(string phoneNum) { m_phoneNum = phoneNum; }
		string GetPhoneNum() { return m_phoneNum; }

		void SetManageId(string manageId) { m_manageId = manageId; }
		string GetManageId() { return m_manageId; }
};

class CustomerManager
{

	CustomerData customerData;

	void SetCustomerData(CustomerData customerData)
	{
		this->customerData = customerData;
	}

	//고객 등록
	void RegisterCustomer(string customerId, string branchId, string address) {}
	
	//고객 삭제
	void DeleteCustomer(string customerId, string branchId, string address) {}
	
	//신규 계좌 개설
	void CreateNewAcc(string id, string name, string phoneNum, string manageId) {}
	
	//계좌 확인
	void CheckAcc(string id, string name, string accNum, string phoneNum) {}
	
	//계좌이체
	void TransferAcc(string accNum) {}
};

class BankData
{
	private:
		string m_branchId;
		string m_address;
		string m_customerId;
		string m_numOfCostomer;
		string m_activatedAccNum;

	public:
		void SetBranchId(string branchId) { m_branchId = branchId; }
		string GetBranchId() { return m_branchId; }

		void SetAddress(string address) { m_address = address; }
		string GetAddress() { return m_address; }

		void SetCustomerId(string customerId) { m_customerId = customerId; }
		string GetCustomerId() { return m_customerId; }

		void SetNumOfCostomer(string numOfCostomer) { m_numOfCostomer = numOfCostomer; }
		string GetNumOfCostomer() { return m_numOfCostomer; }

		void SetActivatedAccNum(string activatedAccNum) { m_activatedAccNum = activatedAccNum; }
		string GetActivatedAccNum() { return m_activatedAccNum; }
};

class BankManager
{
	BankData bankData;

	void setBankData(BankData bankData)
	{
		this->bankData = bankData;
	}

	//지점 추가
	void AddBranch(string branchId, string address) {}
	
	//지점 삭제
	void RemoveBranch(string branchId, string address) {}
	
	//고객 정보 확인
	void CheckCustomerInform(string customerId) {}
	
	//지점 정보 확인
	void CheckBranchInform(string customerId) {}
};






