# 🚀 Smart Insurance Claim Management System

A cloud-native Insurance Claim Management System built using **Spring Boot**, **React.js**, and **MySQL**. The application streamlines the insurance policy lifecycle, claim submission process, claim verification, settlement workflow, and policy management through a role-based dashboard.

---

# 📌 Project Overview

The Smart Insurance Claim Management System enables:

- Customers to purchase insurance products and raise claims.
- Agents to assist customers and manage policies.
- Claims Officers to review, approve, reject, and settle claims.
- Administrators to manage insurance products and monitor system operations.

The system provides a centralized platform for managing the complete insurance claim workflow efficiently.

---

# 🏗️ Architecture

```text
┌─────────────────┐
│ React Frontend  │
└────────┬────────┘
         │ REST APIs
         ▼
┌─────────────────┐
│ Spring Boot API │
└────────┬────────┘
         │ JPA/Hibernate
         ▼
┌─────────────────┐
│ MySQL Database  │
└─────────────────┘
```

---

# 👥 User Roles

## Customer

- Register and Login
- Browse Insurance Products
- Purchase Policies
- View Active Policies
- Submit Insurance Claims
- Track Claim Status
- Make Payments

---

## Agent

- View Available Products
- Create Policies for Customers
- Assist Customers
- View Customer Policies

---

## Claims Officer

- View Claims Queue
- Review Claims
- Request Additional Documents
- Approve Claims
- Reject Claims
- Settle Claims

---

## Administrator

- Dashboard Analytics
- Create Products
- Update Products
- Activate Products
- Deactivate Products
- Monitor Claims
- Review Settlements

---

# 🛠️ Technology Stack

## Frontend

- React 18
- Vite
- React Router
- Axios
- React Icons
- CSS3

## Backend

- Java 21
- Spring Boot
- Spring Security
- JWT Authentication
- Spring Data JPA
- Hibernate
- Maven

## Database

- MySQL 8

---

# 📂 Project Structure

```text
Smart-Insurance-Claim-Management-System
│
├── backend
│   ├── controller
│   ├── service
│   ├── repository
│   ├── entity
│   ├── dto
│   ├── security
│   └── config
│
├── frontend
│   ├── src
│   │   ├── api
│   │   ├── components
│   │   ├── context
│   │   ├── pages
│   │   │   ├── admin
│   │   │   ├── customer
│   │   │   ├── officer
│   │   │   └── agent
│   │   └── App.jsx
│   └── package.json
│
└── README.md
```

---

# ⚙️ Backend Setup

## Clone Repository

```bash
git clone https://github.com/your-username/Smart-Insurance-Claim-Management-System.git
cd Smart-Insurance-Claim-Management-System
```

---

## Configure Database

Create database:

```sql
CREATE DATABASE smt;
```

Update:

```yaml
backend/src/main/resources/application.yml
```

```yaml
spring:
  datasource:
    url: jdbc:mysql://localhost:3306/smt
    username: root
    password: your_password

  jpa:
    hibernate:
      ddl-auto: update
```

---

## Run Backend

```bash
cd backend
mvn clean install
mvn spring-boot:run
```

Backend runs at:

```text
http://localhost:8080
```

---

# 💻 Frontend Setup

Install dependencies:

```bash
cd frontend
npm install
```

Start Development Server:

```bash
npm run dev
```

Frontend runs at:

```text
http://localhost:5173
```

---

# 🔐 Default Test Accounts

| Username | Password | Role |
|-----------|-----------|---------|
| admin | Admin@123 | ADMIN |
| officer1 | Officer@123 | CLAIMS_OFFICER |
| agent1 | Agent@123 | AGENT |

Customers can self-register through the registration page.

---

# 📡 Main API Endpoints

## Authentication

```http
POST /api/auth/register
POST /api/auth/login
```

## Products

```http
GET    /api/products
GET    /api/products/{id}
POST   /api/products
PUT    /api/products/{id}
DELETE /api/products/{id}
PUT    /api/products/{id}/activate
```

## Policies

```http
GET  /api/policies
GET  /api/policies/me
POST /api/policies/purchase
POST /api/policies/{id}/renew
POST /api/policies/{id}/cancel
```

## Claims

```http
POST /api/claims
GET  /api/claims/me

POST /api/claims/review/{id}/under-review
POST /api/claims/review/{id}/approve
POST /api/claims/review/{id}/reject
POST /api/claims/review/{id}/settle
```

---

# ✨ Key Features

✅ JWT Authentication & Authorization

✅ Role-Based Access Control

✅ Insurance Product Management

✅ Policy Purchase Workflow

✅ Insurance Claim Submission

✅ Claim Review & Approval Process

✅ Claim Settlement Workflow

✅ Payment Management

✅ Dashboard Analytics

✅ Product Activation & Deactivation

✅ Responsive User Interface

---

# 🔮 Future Enhancements

- Document Upload to Cloud Storage
- Email Notifications
- SMS Alerts
- AI-based Fraud Detection
- Policy Recommendation Engine
- Docker Containerization
- Kubernetes Deployment
- CI/CD Pipeline Integration

---

# 📷 Screenshots

### Admin Dashboard
- Product Management
- Claims Queue
- Settlements

### Customer Portal
- Browse Products
- Purchase Policies
- Submit Claims

### Agent Desk
- Policy Management
- Product Assistance

### Claims Officer Portal
- Review Claims
- Settlement Processing

---

# 👩‍💻 Author

**Lavanya Juttuka**  
Internship Project

Smart Insurance Claim Management System

---

# 📄 License

This project is developed for educational and internship purposes.
